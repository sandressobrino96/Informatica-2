#include <iostream>

using namespace std;

int longitudCollatz(int n) {
    int contador = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        contador++;
    }
    return contador;
}

int main() {
    int k, mejorSemilla = 1, maxLongitud = 0;

    cout << "Ingresa un numero k: ";
    cin >> k;

    for (int i = 1; i < k; i++) {
        int longitud = longitudCollatz(i);
        if (longitud > maxLongitud) {
            maxLongitud = longitud;
            mejorSemilla = i;
        }
    }

    cout << "La serie mas larga es con la semilla: " << mejorSemilla << ", teniendo " << maxLongitud << " terminos." << endl;

    return 0;
}
