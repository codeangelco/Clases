#include <iostream>
using namespace std;

int main() {
    int n_1, n_2 = 0;

    cout << "Hola! Por favor ingresa el tamaño del arrelgo: ";
    cin >> n_1;

    int arreglo_inicial[n_1], arreglo_final[n_1];

    cout << "Ahora ingresa los elementos del arreglo." << endl;
    for (int i = 0; i < n_1; i++) {
        cin >> arreglo_inicial[i];
    }

    for (int i = 0; i < n_1; i++) { // Este es el for que llevara la logica para resolver el ejercicio.

        int valor_actual = arreglo_inicial[i]; // Aca se guarda el valor que vamos a revisar si esta repetido o no dentro de una variable.
        bool flag = true; // Esta bandera se encargara de decirnos si el numero esta repetido o no, falso para repetido, y verdadero para unico.

        for (int j = 0; j < i; j++) { // En este for se va a recorrer el arreglo desde el principio hasta la posicion del valor actual.
            if (arreglo_inicial[j] == valor_actual) { // Aca se revisa si una posicion anterior a la actual contiene el mismo valor que estamos revisando.
                flag = false;   // Suponiendo que si encuentra el mismo valor, pone a la bandera en falso (repetido).
                break;  // Aca simplemente rompemos el bucle, porque ya encontramos que esta repetido.
            }
        }

        if (flag) { // Aca se revisa si la bandera quedo como verdadera (unico valor) o falso (repetido).
            arreglo_final[n_2] = valor_actual;  // En caso de verdadera, guarda el valor dentro del arreglo final.
            n_2++;  // Y como lo guardamos, ahora el tamaño aumenta en 1.
        }
    }


    cout << "\nArreglo sin valores repetidos." << endl;
    for (int i = 0; i < n_2; i++) {
        cout << arreglo_final[i] << " ";
    }
    cout << endl;
    
    return 0;
}

/* 

Entrada:
Asumimos que sabemos el tamaño.
{2, 6, 3, 8, 4, 1, 3, 6, 3, 8, 4, 0, 5, 7, 3, 9, 5, 5, 2}

Salida:
{2, 6, 3, 8, 4, 1, 0, 5, 7, 9}

*/