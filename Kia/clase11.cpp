#include <iostream>
// Un programa que primero salude al usaurio, despues le pida 2 numeros, y nosotros le devolvemos todas las operaciones matematicas
// entre esos dos numeros.

double sopa(double n1, double n2) {
    double recalentado = 0;
    for (int i = -1; i < n1; i++) {
        recalentado += n2;
    }
    return recalentado;
}

double exponencia(double n1, double n2) {
    double ans = n1;
    while (--n2) {
        ans *= n1;
    }
    return ans;
}

double division(double n1, double n2) {
    return n1 / n2;
}

double multiplicacion(double n1, double n2) {
    return n1 * n2;
}

double resta(double n1, double n2) {
    return n1 - n2;
}

double suma(double n1, double n2) {
    return n1 + n2;
}

void imprimir(double numero) {
    std::cout << numero << std::endl;
}

void saludo() {
    std::cout << "Hola!" << std::endl;
}

void imprimir_todo(double n1, double n2) {
    std::cout << suma(n1,n2) << std::endl;
    std::cout << resta(n1,n2) << std::endl;
    std::cout << multiplicacion(n1,n2) << std::endl;
    std::cout << division(n1,n2) << std::endl;
    std::cout << exponencia(n1,n2) << std::endl;
}

int main() {
    saludo();

    double n1, n2;
    std::cin >> n1 >> n2;
    // imprimir(suma(n1, n2));
    // imprimir(resta(n1, n2));
    // imprimir(multiplicacion(n1, n2));
    // imprimir(division(n1, n2));
    // imprimir(exponencia(n1, n2));
    imprimir_todo(n1, n2);

    4 numeros = 1 2 3 4;
    arr1[] = {1, 2, 3};
    arr2[] = {2, 3, 4};
    arr3[] = {1, 3, 4};
    arr4[] = {1, 2, 4};

    return 0;
}

void imprimir_arreglo(tipo arr[]) {
    for (. . .) {
        . . .
    }
}

void imprimir_todo(arr1, arr2, arr3, arr4) {
    imprimir_arreglo(arr1)
    imprimir_arreglo(arr2)
    imprimir_arreglo(arr3)
    imprimir_arreglo(arr4)
}

tipo crear_arreglo(arr, numero_a_sacar) {
    for (...) {
        arr[x] == numero_a_sacar
            continue;
        
        nuevo_arreglo[y] = arr[x];
    }
    return arr;
}