#include <iostream>

using namespace std;

int main()
{
    int suma=0;
    double promedio;
    int contador=0 ;
    int numero;

    cout<<"ingresa un numero , para finalizar ingresa el numero 0 ";
    cin>>numero;

    while(numero !=0){
        suma += numero;
        contador++;

        cout<<"ingresa otro numero,0 para terminar ";
        cin>>numero;

    }
    if (contador>0){
        double promedio = suma/(1.0*contador);
        cout<<"el promedio de los numeros ingresados es : "<<promedio;
    }else{
        cout<<"el numero ingresado no es valido ";
    }

    return 0;
}
