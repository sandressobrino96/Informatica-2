#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingresa un numero positivo mayor que 0: ";
    cin >> n;

    if (n <= 2) {
        cout << "El numero ingresado es invalido." << endl;
    } else {
        cout << endl;
        for (int i = 0; i < n; i++) {  // Recorre filas
            for (int j = 0; j < n; j++) {  // Recorre columnas
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout <<"+";  // Borde del cuadrado
                } else {
                    cout << " ";  // Espacio vacío dentro
                }
            }
            cout << endl;  // Salto de línea después de cada fila
        }
    }

    return 0;
}



