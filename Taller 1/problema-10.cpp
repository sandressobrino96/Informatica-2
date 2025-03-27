#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false; 
    }
    return true; 
}

int encontrarEnesimoPrimo(int n) {
    int contador = 0; 
    int numero = 1;   

    while (contador < n) {
        numero++; 
        if (esPrimo(numero)) {
            contador++; r
        }
    }
    return numero; 
}

int main() {
    int n;
    cout << "Ingrese un número n: ";
    cin >> n;

    int primo = encontrarEnesimoPrimo(n);
    cout << "El primo número " << n << " es: " << primo << endl;

    return 0;
}