#include <iostream>
using namespace std;

int convertirCadenaANumero(const char* cadena) {
    int numero = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        numero = numero * 10 + (cadena[i] - '0');
    }
    return numero;
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena numerica: ";
    cin >> cadena;

    int resultado = convertirCadenaANumero(cadena);
    cout << "El numero convertido es: " << resultado << endl;
}

