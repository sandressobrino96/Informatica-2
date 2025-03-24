#include <iostream>

using namespace std;

int main()
{
    int a ;
    int b ;
    cout<< "ingresa el numero a ";
    cin>>a;
    cout<<"ingresa el numero b ";
    cin>>b;
    if (a>b){
        cout<<"el valor menor es : "<<b;
    }
    else if (a==b){
        cout<<"a y b son iguales ";
    }
    else {
        cout<<"el valor menor es : "<<a;
    }


    return 0;
}
