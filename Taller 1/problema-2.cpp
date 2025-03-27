#include <iostream>
#include <vector>

using namespace std;

void calcularCombinacion(int cantidad) {
    vector<int> denominaciones = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    
    vector<int> combinacion(denominaciones.size(), 0);
    
    int restante = cantidad;

    for (size_t i = 0; i < denominaciones.size(); ++i) {
        if (restante >= denominaciones[i]) {
            combinacion[i] = restante / denominaciones[i]; 
            restante = restante % denominaciones[i];  
        }
    }
    
    for (size_t i = 0; i < denominaciones.size(); ++i) {
        cout << denominaciones[i] << " : " << combinacion[i] << endl;
    }
    
    if (restante > 0) {
        cout << "Faltante: " << restante << endl;
    }
}

int main() {
    int cantidadDeseada;
    cout << "Ingrese la cantidad deseada: ";
    cin >> cantidadDeseada;
    
    calcularCombinacion(cantidadDeseada);
    
    return 0;
}