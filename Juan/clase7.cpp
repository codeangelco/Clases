#include <iostream>
using namespace std;

int main() {
    // int limite_a, limite_b, cantidad_multiplos = 0;

    // cout << "Ingresa el limite inferior: ";
    // cin >> limite_a;
    // cout << "Ingresa el limite superior: ";
    // cin >> limite_b;

    // for (int i = limite_a; i <= limite_b; i++) {
    //     if (i % 7 == 0) {
    //         cantidad_multiplos++;
    //     }
    // }

    // cout << "Cantidad de multiplos entre " << limite_a << " hasta " << limite_b << " es: " << cantidad_multiplos << endl;

    

    // int i;
    // for (i = 0; i < 10; i++) {
    //     cout << i << endl;
    // }
    // cout << "Hola" << endl;
    // cout << i << endl;






    // tipo_de_datos_que_va_a_contener_el_arreglo nombre_del_arreglo[tamaño_del_arreglo];
    // tipo_de_datos_que_va_a_contener_el_arreglo nombre_del_arreglo[] = {1, 2, 3, 4, 5};

    int arreglo1[5];
    int arreglo2[] = {1, -2, 9, 0, 847, 6, 0};
//                    0   1  2  3   4   5  6

    // cout << arreglo2[0] << endl;


    // Recorremos el arreglo y lo mostramos:
    for (int i = 0; i < 4; i++) {
        cout << arreglo2[i] << endl;
    }

    return 0;
}