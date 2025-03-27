#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double calcularEuler(int n) {
    double e = 0.0;
    for (int i = 0; i < n; ++i) {
        e += 1.0 / factorial(i); 
    }
    return e;
}

int main() {
    int numElementos;
    cout << "Ingrese el número de elementos para la aproximación de e: ";
    cin >> numElementos;

    double e = calcularEuler(numElementos);
    cout << "e es aproximadamente: " << e << endl;

    return 0;
}