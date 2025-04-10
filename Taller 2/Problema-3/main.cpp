#include <iostream>
#include <cstring>
using namespace std;

bool compararCadenas(const char* cad1, const char* cad2) {
    if (strlen(cad1) != strlen(cad2)) {
        return false;
    }
    for (int i = 0; cad1[i] != '\0'; i++) {
        if (cad1[i] != cad2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char cadena1[100], cadena2[100];
    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;
    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    if (compararCadenas(cadena1, cadena2)) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }
}
