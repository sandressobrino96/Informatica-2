#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un número N: ";
    cin >> N;
    cout << "Múltiplos de " << N << " menores que 100:" << endl;

    for (int i = 1; i * N < 100; ++i) {
        cout << i * N << endl; 
    }

    return 0;
}