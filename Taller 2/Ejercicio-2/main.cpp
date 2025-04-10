#include <iostream>
using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma) {
    *suma = 0.0;
    for (int i = 0; i < n; i++) {
        *suma += a[i];
    }
    *promedio = *suma / n;
}

int main() {
    double array[] = {10.0, 20.0, 30.0, 40.0, 50.0};
    int n = 5;
    double suma, promedio;

    fun_c(array, n, &promedio, &suma);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}

