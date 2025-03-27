#include <iostream>
using namespace std;

int mayorFactorPrimo(int n) {
    int maxPrimo = -1; 

    while (n % 2 == 0) {
        maxPrimo = 2; 
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrimo = i; 
            n /= i;
        }
    }

    if (n > 2) {
        maxPrimo = n; 
    }

    return maxPrimo;
}

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 1; 
    }

    int maxPrimo = mayorFactorPrimo(numero);
    cout << "El mayor factor primo de " << numero << " es: " << maxPrimo << endl;

    return 0;
}