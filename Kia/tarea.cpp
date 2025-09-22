#include <iostream>

int main() {
    int n, m, posicion, mayor = -2147000000, valorMenor = -2147000000; // Defino las variables necesarias, y les doy valor a las que lo necesitan.
    std::cin >> n >> m;                 // Leo la cantidad de elementos y la cantidad de mayores.
    int arreglo[n], arregloMayor[m];    // Creo el arreglo de elementos y creo el arreglo de mayores.
    for (int i = 0; i < n; i++) {
        std::cin >> arreglo[i];         // Guardamos los valores en el arreglo.
    }
    for (int k = 0; k < m; k++) {       // Este for va a sacar los k mayores.
        for (int i = 0; i < n; i++) {   // Este for recorre el arreglo principal buscando los mayores.
            if (mayor < arreglo[i]) {   // Condicion para hayar los mayores.
                mayor = arreglo[i];     // Acciones para guardar los mayores.
                posicion = i;
            }
        }
        arregloMayor[k] = mayor;        // Se guarda el mayor en el arreglo de mayores.
        arreglo[posicion] = valorMenor; // Le asigno la posicion donde estaba el elemento mayor, el valor menor posible.
        mayor = valorMenor;             // Restablesco el valor de la variable que me ayuda a verificiar si un numero es el mayor.
    }

    for (int i = 0; i < m; i++) {       // For que me recorre el arreglo de mayores e imprimiendolos en pantalla.
        std::cout << arregloMayor[i];
        if (i < n - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    
    
    return 0;
}