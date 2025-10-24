#include <iostream>
using namespace std;

int main() {
    // * Enunciado:
    // Leer un numero que ingrese el usuario, ese numero va a ser el tamaño del arreglo. El arrelgo tenemos que rellenarlo con la entrada del usuario
    // y si el usuario ingresa un numero impar, cambiar el numero a 0. Al final imprimir el arreglo.
    // Ejemplo:
    // 1 2 3 4 5 6 7 8
    // Salida:
    // 0 2 0 4 0 6 0 8

    // ¿ Es mas facil rellenar el arreglo primero y despues los numeros impares cambiarlos a 0, o, mediante el usuario digita el numero, cambiarlo a 0 e ingresarlo al arreglo.

    // ----------------- RESUELTO ---------------------------------------------------
    // ------------------------------------------------------------------------------

    // *  Enunciado:
    // Hacer un codigo, donde el usuario ingrese el tamaño de un arreglo. Con el arreglo, nosostros vamos calcular el numero menor, el mayor, y la suma de todos los valores.
    // Al final imprimir el menor, el mayor, la suma de todos los valores, y el arreglo.
    // Ejemplo:
    // 8
    // 1 2 3 4 5 6 9 -1
    // Salida:
    // Menor: -1
    // Mayor: 9
    // Suma: 29
    // Arreglo: 1 2 3 4 5 6 9 -1

    // valor maximo que puede contener un int -> 2³¹ - 1 = 2147483647;
    // valor_minimo -> Es la variable que va a gaurdar el valor minimo que va ingresar el usuario, pero al principio, la variable tiene que guardar el valor maximo posible.
    // Por qué? Porque tal vez el valor minimo que ingrese el usuario sea el valor maximo posible!
    int size, valor_minimo = 2147483647, valor_maximo = -2147483647, suma = 0;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> size;
    int arreglo[size];
    // Hasta acá simplemente le pedimos al usuario el tamaño del arreglo, y lo creamos, aparte, creamos las variables de minimo y maximo para comparar.

    for (int i = 0; i < size; i++) {
        cin >> arreglo[i];
        if (arreglo[i] > valor_maximo) {
            valor_maximo = arreglo[i];
        }
        if (arreglo[i] < valor_minimo) {
            valor_minimo = arreglo[i];
        }
        suma += arreglo[i]; // <- suma = suma + arreglo[i];
    }

    cout << "Menor: " << valor_minimo << endl;
    cout << "Mayor: " << valor_maximo << endl;
    cout << "Suma: " << suma << endl;
    cout << "Arreglo: ";
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}