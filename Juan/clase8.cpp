#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 15;

    // a = a + b;
    a += b;

    // a = a - b;
    a -= b;

    // a = a / b;
    a /= b;

    // a = a * b;
    a *= b;

    // a = a * a * b;
    // a *= a * b;

/* 
    int c = 3;
    int i;
//  i = 2, verdadero, imprime i; i = i * c; \
    i = 6, verdadero, imprime i; i *= c; \
    i = 18, falso.
    for (i = 2; i <= 7; i *= c) {
        cout << i << endl;
    }
    cout << "\n" << i << endl; */
/* 
    int n, factorial = 1;
    cout << "Ingresar el numero para sacarle factorial: ";
    cin >> n;
    cout << n << "! = ";

    // n = 5; 1 * 2 * 3 * 4 * 5;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        // factorial = factorial * i;
    }


    cout << factorial << endl; */
/* 
    int numero, suma = 0, contador = 0;

    cin >> numero;
    while (numero != 0) {
        suma += numero;
        contador++;
        cin >> numero;
    }

    cout << "Promedio: " << suma/contador << endl; */

/* 
    int arreglo1[10];
    int arreglo2[] = {1, 2, 3, 4, 5};
//                    0  1  2  3  4

    char arreglo3[] = {'a', 'b', 'c', 'd'};
//                      0    1    2    3

    bool arreglo4[] = {true, false, true, true};
//                       0      1     2     3

    double arreglo5[] = {3.45, 9.08};
//                         0     1

    for (int i = 0; i < 5; i++) {
        cout << arreglo2[i] << endl;
    } */

/* 
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int multiplos[n];
    for (int i = 0; i < n; i++) {
        multiplos[i] = (i + 1) * 5;
    }
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        cout << multiplos[i] << endl;
    } */


/*     
    int n;
    cin >> n;
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        arreglo[i] = (i + 1) * n;
    }
    cout << "----------------------------------------" << endl;
    // Para imprimir todos los elementos de un arreglo, hay que recorrer el arreglo:
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << endl;
    } */




    // Enunciado: Un usuario va a ingresar el valor de n, siendo n el tamaño del arrelgo, seguido de esto el usuario \
        va a ingresar los elementos del arreglo. Tu tarea es cambiar los numeros pares que ingrese el usuario a 0, y al \
        final imprimir el arreglo:

    
    /* 
    5
    1 2 3 4 5

    1 0 3 0 5
    */


/////////////////////////////

    int n;
    cin >> n;
    int arr[n];

/////////////////////////////


    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return 0;
}