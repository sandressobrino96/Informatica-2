#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese la longitud del primer lado: ";
    cin >> a;
    cout << "Ingrese la longitud del segundo lado: ";
    cin >> b;
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
      
        if (a == b && b == c) {
            cout << "Se forma un triángulo equilátero." << endl; s
        } else if (a == b || a == c || b == c) {
            cout << "Se forma un triángulo isósceles." << endl; 
        } else {
            cout << "Se forma un triángulo escaleno." << endl; 
        }
    } else {
        cout << "Las longitudes ingresadas no forman un triángulo." << endl; 
    }

    return 0;
}