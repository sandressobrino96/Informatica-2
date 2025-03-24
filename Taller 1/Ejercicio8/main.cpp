#include <iostream>

using namespace std;

int main()
{
    int x;
    int factorial = 1;

    cout << "Ingrese un numero positivo mayor que 0: ";
    cin >> x;

    if (x < 0) {
        cout << "El número ingresado es negativo, ingresa otro." << endl;
    } else {
        for (int i = 1; i <= x; i++) {
            factorial *= i;
        }

        cout << "El factorial de " << x << " es: " << factorial << endl;
    }

    return 0;
}

