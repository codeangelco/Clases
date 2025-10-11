#include <iostream>

// tipo_de_dato_a_retornar nombre_de_la_funcion(datos_a_recibir) {
//     instrucciones
//     .
//     .
//     return y; <-- opcional (depende del tipo_de_dato_a_retornar)
// }

// Funcion que reciba dos numeros y nos devuelva la suma
// int + int -> int.
// double + double -> double.

/* La funcion recive dos datos tipo int y devuelte un int, sinedo la suma de los dos datos ingresados. */

void vector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = 12;
    }
}

int main() {
    int n = 5;
    int v[n];
    vector(v, n);

    for (int i = 0; i < n; i++) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}