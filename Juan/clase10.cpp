#include <iostream>

// Hacer una funcion Suma(v, n) -> v = vector/arreglo, n -> cantidad de elementos de v.
// La funcion calcula la suma de todos los elementos y la devuelve -> return suma -> int/double;


int Suma(int v[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += v[i];   // <- suma = suma + v[i];
    }
    return suma;
}

/*
int a = 0;
a = a + 1;      a = a + 7;
a += 1;         a += 7;
a++;            No tiene forma mas corta;
*/


int main() {
    int n;
    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> n;

    int v[n];
    std::cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    int suma = Suma(v, n);
    std::cout << "El valor de la suma de todos los elementos del arreglo es: " << suma << std::endl;

    return 0;
}
