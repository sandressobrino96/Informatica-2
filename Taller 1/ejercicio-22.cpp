#include <iostream>
using namespace std;

int main() {
    int totalSegundos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> totalSegundos;

    int horas = totalSegundos / 3600; 
    int minutos = (totalSegundos % 3600) / 60; 
    int segundos = totalSegundos % 60; 

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}