#include <iostream>
using namespace std;

bool esHoraValida(int hora) {
    return (hora >= 0 && hora < 2400 && (hora % 100) < 60);
}

bool esDuracionValida(int duracion) {
    return (duracion >= 0 && duracion < 2400 && (duracion % 100) < 60);
}

int sumarTiempo(int hora, int duracion) {
    int horas = hora / 100; 
    int minutos = hora % 100; 

    int duracionHoras = duracion / 100; 
    int duracionMinutos = duracion % 100; 

    minutos += duracionMinutos;
    horas += duracionHoras + minutos / 60; 
    minutos = minutos % 60; 

    horas = horas % 24; /

    return horas * 100 + minutos; 
}

int main() {
    int hora, duracion;

    cout << "Ingrese la hora (HHMM): ";
    cin >> hora;

    if (!esHoraValida(hora)) {
        cout << hora << " es un tiempo invalido." << endl;
        return 1; 
    }

    cout << "Ingrese la duración (HHMM): ";
    cin >> duracion;

    if (!esDuracionValida(duracion)) {
        cout << duracion << " es un tiempo invalido." << endl;
        return 1; 
    }

    int resultado = sumarTiempo(hora, duracion);
    cout << "La hora es " << resultado << "." << endl;

    return 0;
}