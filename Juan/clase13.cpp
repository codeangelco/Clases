#include <iostream>

/*
 * Enteros:
int; <- 2³¹ - 1 = 2.147.483.647;
long long int <=> long long; <- 2⁶³ - 1 = 9.223.372.036.854.775.807;

 * Reales:
float;
double;

 * Caracteres
char;
std::string;

bool; <- Solo guarda: Verdadero <-> Falso;

// ----------------------------------------------------------------------//

 * Arreglos:
char[];
int[];
long long[];

// ----------------------------------------------------------------------//

 * Controles de flujo:

if (condicion) {
    intrucciones
}

switch (Expresion) {
    case Expresion constante:
        intrucciones
        break;
    default:
        intrucciones
        break;
}

while (condicion) {
    instrucciones
}

do {
    instrucciones
} while (condicion);

for (inicializacoin; condicion; actualizacion) {
    instrucciones;
}

// ----------------------------------------------------------------------//

 * Funciones:

int suma(int numero_1, int numero_2) {
    instrcciones
    return resultado;
}

// ----------------------------------------------------------------------//

*/


int main() {
    /**
     * Para poder definir un arrelgo, tenemos que conocer ya su tamaño.
     *      Esto significa, que una vez creado un arreglo, su tamaño será fijo.
     * 
     * Para poder interactuar con ellos, hay que recorrerlos.
     *      Para poder recorrer un arrelgo, tenemos los indices/posiciones, comenzando desde el 0 '[i]'
     * 
     * Cuando creamos un arrelgo, hay que definir los valores que va contener, porque por defecto traen basura.
     * 
     * Hay 3 formas de crear un arrelgo:
     *      1. tipo nombre[] = {datos a contener}; <- No es necesario colocarle un tamaño, porque los datos que contienen ya se lo definen.
     *      2. tipo nombre[tamaño]; <- Es necesario colocar un tamaño, ya que el arreglo como en el caso anterior no conoce cuantos datos contendrá.
     *      3. tipo nombre[tamaño] = {datos a contener}; <- Esta es la forma menos comun, ya que las otras son mas intuitivas (no recomendado);
    *  */

    // int size;
    // std::cout << "Ingrese el tamaño del arreglo: ";
    // std::cin >> size;

    // int arreglo[size];

    // std::cout << "Antes de inicializar (con basura):" << std::endl;
    // for (int i = 0; i < size; i++) {
    //     std::cout << arreglo[i] << " ";
    // }
    // std::cout << std::endl;

    // for (int i = 0; i < size; i++) {
    //     arreglo[i] = i + 1;
    // }
    // std::cout << std::endl;

    // std::cout << "Despues de inicializar (sin basura):" << std::endl;
    // for (int i = 0; i < size; i++) {
    //     std::cout << arreglo[i] << " ";
    // }
    // std::cout << std::endl;


    // 1 * x, 2 * x, 3 * x, 4 * x.

    int tabla;
    std::cout << "Ingrese el numero para la tabla de multiplicar: ";
    std::cin >> tabla;

    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//                     0  1  2  3  4  5  6  7  8  9    ;10 <- Error
    for (int i = 0; i <= 9; i++) {
        arreglo[i] = tabla * (i + 1);
    }

    for (int i = 0; i <= 9; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}