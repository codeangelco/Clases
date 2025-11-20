#include <iostream>
#include <cmath>
#include <list>
using namespace std;

// class Libro
// {
//     private:
//         size_t cantidad_paginas;

//     public:
//         Libro(int paginas) : cantidad_paginas(size_t(paginas)) {}

//         size_t getCantidad() {
//             return cantidad_paginas;
//         }

//         /* Devuelve true, siempre y cuando la cantidad de paginas del libro sea entre (350,500) */
//         bool permitido() {
//             return (this->getCantidad() > 350 && this->getCantidad() < 500);
//         }
// };



// int main() {
//     int paginas;
//     cout << "Ingresar la cantidad de paginas del libro: ";
//     while (cin >> paginas && paginas > 0) {
//         Libro nuevo_libro(paginas);
//         cout << "El libro " << (nuevo_libro.permitido() ? "si esta" : "no esta") << " permitido" << endl;
//         cout << "\nIngresa una nueva cantidad: ";
//     }
    
//     // Libro nuevo_libro(paginas);
//     // cout << "El libro " << (permitido(nuevo_libro) ? "si esta" : "no esta") << " permitido" << endl;
//     return 0;
// }


void saludar() {
    cout << "Hola! 👋" << endl;
}

void despedir() {
    cout << "Adios! 🤝" << endl;
}

// int main() {
//     // int a = 10;
//     // int arr[10];
//     // int *p = arr;
//     // int *puntero = new int[5]; // Esto es como decirle al programa que nos guarde un espacio de memoria;
//     // for (int *puntero2 = puntero; puntero2 < puntero + 5; puntero2++) {
//     //     cin >> *puntero2;
//     // }

//     // cout << "----------------------------------------" << endl;

//     // for (int *puntero2 = puntero; puntero2 < puntero + 5; puntero2++) {
//     //     cout << *puntero2 << (puntero2 < puntero + 4 ? " " : "\n");
//     // }


//     int a = 10;
//     int *puntero;
//     puntero = &a;
//     // a | &a
//     // puntero | &puntero | *puntero
//     int **puntero2 = &puntero;
//     // puntero2 | &puntero2 | **puntero2 | *puntero2

//     saludar();
//     despedir();

    

//     return 0;
// }

void decimal_a_binario(int &numero) {
    int residuo, posicion=0, resultado=0;
    int numero_copia = numero;
    do {
        residuo = numero_copia % 2; 
        resultado += residuo * pow(10,posicion);
        posicion++;
        numero_copia = numero_copia / 2;
    } while (numero_copia > 0);
    numero = resultado;
}


void imprimirMatriz(int *puntero, int *final) {
    for (puntero; puntero <= final; puntero++) {
        cout << *puntero << (puntero < final ? " " : "\n");
    }
}

int main() {

    saludar();

    int matriz[][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5}
    };

    int *p = &matriz[0][0];
    int *p2 = &matriz[2][2];
    imprimirMatriz(p, p2);

    // int numero;
    // cout << "Ingresa un numero para pasar a binario: ";
    // cin >> numero;
    // decimal_a_binario(numero);
    // cout << "Tu numero en binario es: " << numero << endl;

    despedir();
    return 0;
}

//   0    0    0    0    0
//  2^4  2^3  2^2  2^1  2^0  