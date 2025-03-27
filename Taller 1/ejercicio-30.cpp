#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int numeroAleatorio = rand() % 101; 
    int intento;
    int contador = 0;

    cout << "Intenta adivinar un número aleatorio entre 0 y 100." << endl;

    do {
        cout << "Introduce tu suposición: ";
        cin >> intento;
        contador++;

        if (intento > numeroAleatorio) {
            cout << "El número es menor." << endl;
        } else if (intento < numeroAleatorio) {
            cout << "El número es mayor." << endl;
        } else {
            cout << " correcto " << numeroAleatorio 
                 << " en " << contador << " intentos." << endl;
        }
    } while (intento != numeroAleatorio);

    return 0;
}