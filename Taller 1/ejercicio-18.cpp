#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int N;

    cout << "Ingrese un número N: ";
    cin >> N;

    if (N < 0) {
        cout << N << " NO es un cuadrado perfecto." << endl; 
    } else {
        int raiz = static_cast<int>(sqrt(N)); 
        if (raiz * raiz == N) {
            cout << N << " es un cuadrado perfecto." << endl; 
        } else {
            cout << N << " NO es un cuadrado perfecto." << endl; 
        }
    }

    return 0;
}