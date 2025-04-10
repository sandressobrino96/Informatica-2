#include <iostream>
using namespace std;

void convertirNumeroACadena(int numero, char* cadena) {
    int i = 0, j;
    bool esNegativo = false;
    if (numero == 0) {
        cadena[i++] = '0';
        cadena[i] = '\0';
        return;
    }
    if (numero < 0) {
        esNegativo = true;
        numero = -numero;
    }
    while (numero != 0) {
        cadena[i++] = (numero % 10) + '0';
        numero /= 10;
    }
    if (esNegativo) {
        cadena[i++] = '-';
    }
    cadena[i] = '\0';
    for (j = 0; j < i / 2; j++) {
        char temp = cadena[j];
        cadena[j] = cadena[i - j - 1];
        cadena[i - j - 1] = temp;
    }
}

int main() {
    int numero;
    char cadena[100];
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    convertirNumeroACadena(numero, cadena);
    cout << "La cadena convertida es: " << cadena << endl;
}

