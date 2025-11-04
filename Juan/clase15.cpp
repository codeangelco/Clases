#include <iostream>
using namespace std;

int main() {
    /* int a = 10;

    if (a >= 10) {
        cout << "A es mayor o igual a 10" << endl;
        if (a >= 20) {
            cout << "A es mayor o igual a 20" << endl;
            if (a >= 30) {
                cout << "A es mayot o igual a 30" << endl;
            }
        }
    }

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    } */

    /* int arreglo[10] {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arreglo[i] += i * j;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "arreglo[" << i << "] = " << arreglo[i] << endl;
    }

    cout << 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 << endl;
    return 0; */


    /**
     * * Enunciado:
     * Crea un programa que pida 5 números y muestre todas las posibles sumas entre dos elementos distintos del arreglo.
     * ! Se tiene que hacer con un for anidado.
     * 
     * Ejemplo:
     * 1 2 3 4 5
     * Salida: 
     * 1 + 2 = 3
     * 1 + 3 = 4
     * 1 + 4 = 5
     * 1 + 5 = 6
     * 2 + 3 = 5
     * 2 + 4 = 6
     * 2 + 5 = 7
     * 3 + 4 = 7
     * 3 + 5 = 8
     * 4 + 5 = 9 <- Igual a: 5 + 4 = 9 ( No se tiene que repetir )
     */

    int size = 5;
    int arr[size];
    cout << "Ingrese " << size << " numeros: " << endl;
    for (int i = 0; i < size; i++) { // Dejamos este for asi ya que solo lo necesitamos para leer los datos del asuario.
        cin >>  arr[i];
    }

//  arreglo[] = {1, 2, 3, 4, 5}
//               0  1  2  3  4
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            cout << arr[i] << " + " << arr[j] << " = " << arr[i] + arr[j] << endl;
        }
    }

}