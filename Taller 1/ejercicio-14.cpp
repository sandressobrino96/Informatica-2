#include <iostream>
using namespace std;

int main() {
    cout << "Columna 1\tColumna 2" << endl;
    cout << "------------------------" << endl;

    for (int i = 1; i <= 50; ++i) {
        cout << i << "\t\t" << (51 - i) << endl; 
    }

    return 0;
}