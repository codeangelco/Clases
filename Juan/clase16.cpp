#include <iostream>
using namespace std;

int main() {
    /**
     * REPASO - ARREGLOS:
     * Como definimos un arrelgo:
     *  Primera forma: tipo nombre[tamaño];
     *  Segunda forma: tipo nombre[] = {elementos};
     *  Tercera forma (menos recomendada): tipo nombre[tamaño] = {elementos};
     * 
     * Como podemos utilizarlos:
     *  Para poder utilizarlos, debemos recorrer elemento por elemento en el arreglo.
     *  Cualquier accion que queramos hacer, debemos hacerla elemento por elementos.
     * 
     * Como podemos recorrerlo:
     *  Para recorrer elemento por elemento tenemos los indices/posiciones, comienzan desde 0 y se pone entre corchetes [indice].
    */

    // * ARREGLOS DE MULTIPLES DIMENCIONES / MATRICES

    // 1D
    int a[] = {1, 2, 3, 4, 5};
    // Nombre: Arreglo

    // 2D
    int b[][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    // Nombre: Matriz

    // 3D
//       z  y  x
    int c[][3][3] = {
        {
            {1, 2, 3},
            {1, 2, 3},
            {1, 2, 3}
        },
        {
            {1, 2, 3},
            {1, 2, 3},
            {1, 2, 3}
        },
        {
            {1, 2, 3},
            {1, 2, 3},
            {1, 2, 3},
        }
    };
    // Nombre: ( Arreglo tridimensional / Matriz tridimensional ) de tres dimensiones

    // 4D
    int d[][2][2][2] = {
        {
            {
                {1, 2},
                {1, 2}
            },
            {
                {1, 2},
                {1, 2}
            }
        },
        {
            {
                {1, 2},
                {1, 2}
            },
            {
                {1, 2},
                {1, 2}
            }
        }
    };
    // Nombre: ( Arreglo cuadridimiensional / Matriz cuadridimiensional ) de cuatro dimensiones

    /**
     * REGLAS DE LAS MATRICES:
     * Definicion:
     *  A la hora de definirse/crearce, es obligatorio colocar el tamaño del segundo espacio en adelante.
     *  Y el primer espacio es opcional, respetando la regla del arreglo 1D.
     *  Ejemplo: tipo nombre[tamaño_y][tamaño_x];
     *           tipo nombre[][tamaño_x] = { {elementos} };
     *  Si ya sabemos los elementos que contendra la matriz, lo mejor es asigarle los valor de una vez.
     *  Si por el contrario no sabemos, como por ejemplo tener que esperar a que el usuario los digite, solo podremos utilizar la primera.
     * 
     * Cordenadas:
     *  Las cordenadas de una matriz el 0,0 está en la parte superior izquierda.
     *  Aumenta la cordenada x y y, entre mas abajo y a la derecha estemos.
     *  En programacion, las cordenadas se invierten, si en la vida real es x,y en programacion en y,x. Lo mismo aplica para dimensiones mayores.
     *  
     */

    int matriz_1[2][2]; // <- ! Se creo correctamente pero contiene basura!

    int matriz_2[][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    int arr[10] {0}; // Forma de limpiar la basura en arreglos 1D.
    int matriz[2][2]; // {{0}}; // Forma de limpiar la basura en matrices.

    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 2; x++) {
            cout << matriz[y][x] << " ";
        }
        cout << endl;
    }

    for (int z = 0; z < 3; z++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                cout << c[z][y][x] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "--------------------- SEPARADOR ---------------------" << endl;

    // Aca rellenamos la matriz con valores ingresados por el usuario.
    cout << "Ingrese los valores para la matriz 2x2:" << endl;

    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 2; x++) {
            cin >> matriz[y][x];
        }
    }

    // Aca mostramos la matriz con los valores ingresados por el usuario.
    cout << "La matriz ingresada es:" << endl;
    for (int y = 0; y < 2; y++) {
        for (int x = 0; x < 2; x++) {
            cout << matriz[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}