#include <iostream>

using namespace std;

int main()
{
    int  base ;
    cout<<"ingresa la base a calcular ";
    cin>>base;
    int exponente  ;
    cout<<"ingresa las potencias a calcular ";
    cin>>exponente;

        if (exponente<0){
        cout<<"no se pueden calcular potencias negativas en los enteros ";
    }
    else {
        int potencia=1;
        cout << "Las potencias de " << base << " son:" << endl;

        for (int i=0;i<=exponente;i++){
            cout<<"exponente "<<i<<":"<<potencia<<endl;
            potencia *= base;

        }
    }

    return 0;
}
