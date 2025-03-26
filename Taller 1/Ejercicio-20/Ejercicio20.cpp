#include <iostream>

using namespace std;

int main()
{
    int numero;
    int invertido = 0 ;
    int digito;
    cout<<"ingresa un numero ";
    cin>>numero;


    int v_temp = numero;
    while (v_temp>0){
        digito =v_temp %10 ;
        invertido = invertido * 10+digito;
        v_temp /= 10 ;


    }
    if (invertido==numero){
        cout<<"el numero es palindromo";
    }else{cout<<"el numero no es palindromo";}



}
