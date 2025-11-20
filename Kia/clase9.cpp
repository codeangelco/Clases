#include <iostream>

int main() {
    int arreglo[] = {12,29,32,3,48};
    int arregloMayor[3];
    int mayor = -2147000000, posicion;
    int valorMenor = -2147000000;

    for (int i = 0; i < 5; i++) {
        if (mayor < arreglo[i]) {
            mayor = arreglo[i];
            posicion = i;
        }
    }
    arreglo[posicion] = valorMenor;
    arregloMayor[0] = mayor;
    mayor = valorMenor;

    for (int i = 0; i < 5; i++) {
        if (mayor < arreglo[i]) {
            mayor = arreglo[i];
            posicion = i;
        }
    }
    arreglo[posicion] = valorMenor;
    arregloMayor[1] = mayor;
    mayor = valorMenor;
    
    for (int i = 0; i < 5; i++) {
        if (mayor < arreglo[i]) {
            mayor = arreglo[i];
            posicion = i;
        }
    }
    arreglo[posicion] = valorMenor;
    arregloMayor[2] = mayor;

    for (int i = 0; i < 3; i++) {
        std::cout << arregloMayor[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0, k = 0; i < 5; i++) {
        if (arreglo[i] == valorMenor) {
            arreglo[i] = arregloMayor[k];
            k++;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << arreglo[i] << " ";
    }

    return 0;
}