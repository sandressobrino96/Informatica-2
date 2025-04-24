#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>

using namespace std;

// Función para leer el archivo binario
string leerBinario(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo de entrada.\n";
        exit(1);
    }

    string binario;
    char byte;
    while (archivo.get(byte)) {
        binario += bitset<8>((unsigned char)byte).to_string();
    }
    archivo.close();
    return binario;
}

// Función para guardar el binario en un archivo
void guardarBinario(const string& binario, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::binary);
    if (!archivo) {
        cerr << "Error al abrir el archivo de salida.\n";
        exit(1);
    }

    for (size_t i = 0; i < binario.size(); i += 8) {
        bitset<8> byte(binario.substr(i, 8));
        archivo.put((char)byte.to_ulong());
    }

    archivo.close();
}

// Método 2: rotación de bits a la derecha para decodificar
string decodificarMetodo2(const string& binario, int n) {
    string resultado;
    for (size_t i = 0; i < binario.size(); i += n) {
        string bloque = binario.substr(i, n);
        if (bloque.size() < n) break;
        string decodificado = bloque.back() + bloque.substr(0, bloque.size() - 1);
        resultado += decodificado;
    }
    return resultado;
}

int main() {
    int semilla, metodo;
    string archivoEntrada, archivoSalida;

    cout << "Ingrese la semilla: ";
    cin >> semilla;
    cout << "Ingrese el método de decodificación (1 o 2): ";
    cin >> metodo;
    cout << "Nombre del archivo codificado: ";
    cin >> archivoEntrada;
    cout << "Nombre del archivo de salida: ";
    cin >> archivoSalida;

    string binario = leerBinario(archivoEntrada);
    string decodificado;

    if (metodo == 2) {
        decodificado = decodificarMetodo2(binario, semilla);
    } else {
        cout << "Método 1 aún no implementado." << endl;
        return 1;
    }

    guardarBinario(decodificado, archivoSalida);
    cout << "Archivo decodificado correctamente.\n";
    return 0;
}
