#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

string toBinary(const string& text) {
    string binary;
    for (char c : text) {
        binary += bitset<8>(c).to_string();
    }
    return binary;
}

string metodo1(const string& bin, int n) {
    string codificado;
    vector<string> bloques;
    for (size_t i = 0; i < bin.size(); i += n) {
        bloques.push_back(bin.substr(i, n));
    }
    for (size_t i = 0; i < bloques.size(); ++i) {
        string& bloque = bloques[i];
        if (i == 0) {
            for (char& bit : bloque) bit = (bit == '0') ? '1' : '0';
        } else {
            int unos = count(bloques[i - 1].begin(), bloques[i - 1].end(), '1');
            int ceros = bloques[i - 1].size() - unos;
            if (ceros == unos) {
                for (char& bit : bloque) bit = (bit == '0') ? '1' : '0';
            } else if (ceros > unos) {
                for (size_t j = 0; j < bloque.size(); j += 2) if (j + 1 < bloque.size()) swap(bloque[j], bloque[j + 1]);
            } else {
                for (size_t j = 0; j < bloque.size(); j += 3) {
                    if (j + 2 < bloque.size()) swap(bloque[j], bloque[j + 2]);
                }
            }
        }
        codificado += bloque;
    }
    return codificado;
}

string metodo2(const string& bin, int n) {
    string codificado;
    for (size_t i = 0; i < bin.size(); i += n) {
        string bloque = bin.substr(i, n);
        if (bloque.size() == n) {
            string nuevo = bloque.substr(n - 1, 1) + bloque.substr(0, n - 1);
            codificado += nuevo;
        } else {
            codificado += bloque;
        }
    }
    return codificado;
}

void guardarBinario(const string& bin, const string& filename) {
    ofstream out(filename, ios::binary);
    if (!out) throw runtime_error("No se pudo abrir el archivo para escritura");
    for (size_t i = 0; i < bin.size(); i += 8) {
        bitset<8> byte(bin.substr(i, 8));
        out.put(static_cast<char>(byte.to_ulong()));
    }
    out.close();
}

void codificarArchivo(const string& archivoEntrada, const string& archivoSalida, int semilla, int metodo) {
    ifstream in(archivoEntrada);
    if (!in) throw runtime_error("No se pudo abrir el archivo de entrada");
    string contenido((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
    in.close();

    string bin = toBinary(contenido);
    string codificado;
    if (metodo == 1) codificado = metodo1(bin, semilla);
    else if (metodo == 2) codificado = metodo2(bin, semilla);
    else throw invalid_argument("Método no válido");

    guardarBinario(codificado, archivoSalida);
}

int main() {
    string entrada, salida;
    int semilla, metodo;

    cout << "Archivo de entrada: ";
    cin >> entrada;
    cout << "Archivo de salida: ";
    cin >> salida;
    cout << "Semilla de codificación (n): ";
    cin >> semilla;
    cout << "Método de codificación (1 o 2): ";
    cin >> metodo;

    try {
        codificarArchivo(entrada, salida, semilla, metodo);
        cout << "Archivo codificado exitosamente." << endl;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
