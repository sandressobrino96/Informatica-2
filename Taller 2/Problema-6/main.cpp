#include <iostream>
using namespace std;

void convertirAMayusculas(char* cadena) {
    int i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - 32;
        }
        i++;
    }
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);

    cout << "Original: " << cadena << endl;
    convertirAMayusculas(cadena);
    cout << "En mayuscula: " << cadena << endl;
}

