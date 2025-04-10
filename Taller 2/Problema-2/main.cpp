#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int TAM = 200;
    char arreglo[TAM];
    int contador[26] = {0};

    srand(time(0));

    for (int i = 0; i < TAM; i++) {
        arreglo[i] = 'A' + rand() % 26;
        cout << arreglo[i];
        contador[arreglo[i] - 'A']++;
    }

    cout << endl;

    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            cout << char('A' + i) << ": " << contador[i] << endl;
        }
    }

    return 0;
}

