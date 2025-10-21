#include <iostream>

// InicializaVector(v, n), que inicializa los valores de un Vector en 0 de largo n.

void inicializaVector(int v[], int n) {
    // v = 0; ERROR: Le estamos dando un valor a una variable arreglo.
    for (int i = 0; i < n; i++) {
        v[i] = 0;
    }
}

int main() {
    int n = 5;
    int vector[n];

    std::cout << "Vector antes de inicializar:\n";
    for (int i = 0; i < n; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;

    inicializaVector(vector, n);

    std::cout << "Vector despues de inicializar:\n";
    for (int i = 0; i < n; i++) {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}