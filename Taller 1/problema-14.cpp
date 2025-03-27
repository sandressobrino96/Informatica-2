#include <iostream>
using namespace std;

bool esPalindromo(int num) {
    int original = num;
    int invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    return original == invertido;
}

int main() {
    int maxPalindromo = 0; 
    int num1 = 0, num2 = 0; 

    for (int i = 100; i <= 999; ++i) {
        for (int j = i; j <= 999; ++j) { 
            int producto = i * j; 

            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
                num1 = i; 
                num2 = j; 
            }
        }
    }

    cout << num1 << "*" << num2 << "=" << maxPalindromo << endl;

    return 0;
}