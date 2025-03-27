#include <iostream>
using namespace std;

int main() {
    int A, B;
    long long resultado = 1; 
    cout << "Ingrese el número A: ";
    cin >> A;
    cout << "Ingrese el número B: ";
    cin >> B;

    for (int i = 0; i < B; ++i) {
        resultado *= A; 
    }
    cout << A << "∧" << B << "=" << resultado << endl;

    return 0;
}