#include <iostream>

using namespace std;

void fun_a(int *px, int *py); void
fun_b(int a[], int tam);
int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
}
void fun_a(int *px,int*py){ int
        tmp = *px;
    *px = *py;
    *py = tmp;
}
void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}
//¿Cuál es su dirección en memoria? ¿Cuántos bytes se dedican para almacenar cada elemento de array?
//@0x748d5ff690 y se le adicionan 4 bytes

// ¿Cuál es la dirección y el contenido en memoria del elemento array [3]?
//array[3] está en 0x748d5ff69C dado que se inicia en @0x748d5ff690


// Describe el efecto que tiene la función fun_b, sobre el arreglo array.
//fun_b invierte todos los elementos del arreglo , Es como si el primero y el último
//cambiaran de lugar, luego el segundo y el penúltimo, y así sucesivamente.
