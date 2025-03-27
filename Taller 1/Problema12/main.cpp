#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int factor = 2;
    while (num % 2 == 0) {
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factor = i;
            num /= i;
        }
    }

    if (num > 2) factor = num;

    cout << "El mayor factor primo es: " << factor << endl;
    return 0;
}
