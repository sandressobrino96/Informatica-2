#include <iostream>
using namespace std;

int main() {
    int hora, duracion;
    cin >> hora >> duracion;

    int horas_h = hora / 100, minutos_h = hora % 100;
    int horas_d = duracion / 100, minutos_d = duracion % 100;

    if (horas_h > 23 || minutos_h > 59 || horas_d > 23 || minutos_d > 59) {
        cout << hora << " es un tiempo invalido" << endl;
        return 0;
    }

    int total_min = minutos_h + minutos_d;
    int total_horas = horas_h + horas_d + (total_min / 60);
    total_min %= 60;
    total_horas %= 24;

    printf("La hora es %02d%02d\n", total_horas, total_min);
    return 0;
}
//Escriba un programa para leer dos números enteros con el siguiente signicado: el
// valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
//representa las doce y cuarenta y cinco de la tarde. El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos. El programa debe
//sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
//1630, que es el tiempo de 3 horas y 45 minutos después
