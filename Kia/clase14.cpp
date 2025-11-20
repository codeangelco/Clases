#include <iostream>
using namespace std;

/*
tipo_de_retorno nombre_de_la_funcion(tipo_1 nombre_de_dato_1, tipo_2 nombre_de_dato_2, tipo_3 nombre_de_dato_3, ...) {
    INSTRUCCIONES.
    .
    .
    .
    return valor_a_retornar;  <--- Opcional unicamente para tipo void.
}

    int a = nombre_de_la_funcion(datos_de_la_funcion);
    nombre_de_la_funcion(datos_de_la_funcion);
    cout << nombre_de_la_funcion(datos_de_la_funcion);
    nombre_de_la_funcion_2(nombre_de_la_funcion(datos_de_la_funcion));
*/

void saludar() {
    cout << "Hola" << endl;
    // return;
    cout << "Hola_2" << endl;
}

int suma(int numero1, int numero2) {
    int resultado;
    resultado = numero1 + numero2;
    return resultado;
}

int cubo(int elevado) {
    int resultado;
    resultado = elevado * elevado * elevado;
    return resultado;
} // Devuelve un entero, siendo el cubo del numero ingresado.

void rellenar_arreglo(int arreglillo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        arreglillo[i] = i + 1;
    }
} // Funcion donde le vamos a pasar como parametro un arreglo, y nos lo va a rellenar.

void imprimir(int arreglillo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << arreglillo[i] << " ";
    }
    cout << endl;
} // Funcion que va a imprimir en pantalla los elementos de un arreglo.

int main() {
    saludar();
    int n, resultado;
    cin >> n;
    resultado = suma(cubo(n),2);
    cout << resultado << endl;
    int arr[cubo(n)];
    rellenar_arreglo(arr,cubo(n));
    imprimir(arr,cubo(n));
    return 0;
}



