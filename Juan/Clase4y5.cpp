#include <iostream>

int main() {
    // for () {}


    // Bucle 'while'
    
    // while (condicion) {
    //     instrucciones
    //     .
    //     .
    //     .
    // }

    // int puntos_de_salud = 5;

    // while (puntos_de_salud >= 1)
    // {
    //     std::cout << "Se aplica veneno" << std::endl;
    //     puntos_de_salud--;
    //     std::cout << puntos_de_salud << " puntos de salud restantes.\n" << std::endl;
    // }

    // std::cout << "Has muerto." << std::endl;
    
    
    int a;
    std::cin >> a;
    while (true) {
        if (a == 0) {
            break;
        }
        std::cout << "Se leyó el número: " << a << std::endl;
        std::cin >> a;
    }
    
    


    // Hacer un codigo, que mientras el usuario no ingrese el numero 0, siga mostrando si el numero ingresado es par o impar

    return 0;
}





/*

for (int i = 1; i <= numero; i++) {
    if (numero % i == 0) {
        std::cout << i << " es divisor de " << n << std::endl;
    } else {
        std::cout << i << " no es divisor de " << n << std::endl;
    }
}
numero = 1;

i = 1, revisa la condicion -> i >= numero = verdadero, hace el bucle;

i = 2, revisa la condicion -> i >= numero = verdadero, hace el bucle;

i = 3, revisa la condicion -> i >= numero = verdadero, hace el bucle;

i = 1, revisa la condicion -> i >= numero = verdadero, hace el bucle;

### CUIDADO! BUCLE INFINITO




//////
i = 1, revisa la condicion -> i <= numero = verdadero, ejecuta instrucciones:
    revisa if () -> Verdadero, imprime, y pasa a la siguiente iteracion; i++;

i = 2, revisa la condicion -> i <= numero = verdadero, ejecuta instrucciones:
    revisa if () -> Falso, imprime, y pasa a la siguinete iteracion; i++;

i = 3, revisa la condicion -> i <= numero = verdadero, ejecuta instrucciones:
    revisa if () -> Falso, imprime, y pasa a la siguiente iteracion; i++;

i = 4, revisa la condicion -> i <= numero = verdadero, ejecuta instrucciones:
    revisa if () -> Falso, imprime, y pasa a la siguiente iteracion; i++;

i = 5, revisa la condicion -> i <= numero = verdadero, ejecuta instrucciones:
    revisa if () -> verdero, imprime, y pasa a la siguiente iteracion; i++;

i = 6, revisa la condicion -> i <= numero = falso, termina el bucle;





*/