#include <iostream>
using namespace std;

void eliminarRepetidos(char* cadena) {
    int i = 0, j, k;
    while (cadena[i] != '\0') {
        j = i + 1;
        while (cadena[j] != '\0') {
            if (cadena[i] == cadena[j]) {
                k = j;
                while (cadena[k] != '\0') {
                    cadena[k] = cadena[k + 1];
                    k++;
                }
            } else {
                j++;
            }
        }
        i++;
    }
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;
    eliminarRepetidos(cadena);
    cout << "Sin repetidos: " << cadena << endl;
}

