#include <iostream>

// int suma(int numero_1, int numero_2) {
//     int resultado;
//     resultado = numero_1 + numero_2;
//     return resultado;
// }

// int resta(int numero_1, int numero_2) {
//     int resultado;
//     resultado = numero_1 - numero_2;
//     return resultado;
// }

// int f(int numero_1) {
//     int resultado;
//     resultado = numero_1 + 2;
//     return resultado;
// }

// char sopa(int )

// int main() {
//     // ### FUNCIONES
//     /* 
//     Una funcion, es una estructura de pasos ya establecidos, que recive un input, y devuelve un output.

//     F(x) = x + 2
//         x = 1; f(x) = 3.
//         x = 22; f(x) = 24.
//     */
    
//     // int a, b, resultado;
//     // std::cin >> a;
//     // std::cin >> b;
//     // resultado = resta(a,2);
//     // std::cout << resultado;

//     return 0;
// }



// double dividir(double dividendo, double divisor);

// int main() {
//     double result = dividir(10,5);
//     cout << result << endl;

//     return 0;
// }

// double dividir(double a, double b) {
//     return a / b;
// }


// char numero_a_caracter(int numero) {
//     char caracter;
//     caracter = numero;
//     return caracter;
// }

// int main() {
//     int n;
//     std::cin >> n;
//     std::cout << numero_a_caracter(n) << std::endl;
// }


// void imprimir(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i];
//         if (i < size - 1) {
//             std::cout << " ";
//         }
//     }
//     std::cout << std::endl;
// }

// void leer(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         std::cin >> arr[i];
//     }
// }

// int asignar(int numero) {
//     numero = 10;
//     return numero;
// }

// int main() {
//     int size;
//     std::cin >> size;

//     int arr[size];
//     leer(arr,size);

//     int arr2[size];
//     leer(arr2,size);

//     int arr3[size];
//     leer(arr3,size);


//     std::cout << "------------------ #1" << std::endl;
//     imprimir(arr,size);

//     std::cout << "------------------ #2" << std::endl;
//     imprimir(arr2,size);

//     std::cout << "------------------ #3" << std::endl;
//     imprimir(arr3,size);






    



//     // imprimir(arr, 5);    // Cuando mandamos un arreglo a una funcion, lo hacemos sin [ ].
    
//     // int n;
//     // n = asignar(n);
//     // std::cout << n << std::endl;

//     return 0;
// }

/* 
______________________________
|    *2                      |
|                            |
|                            |
|    *3          *1          |
|                            |
|____________________________|

int a; <- *1
copia int a2; <- *2
cambio de valor a a2;

int arr[]; <- *3;
mando a una funcion arr;
funcion tiene a *3;
    arr[0] = 1;

*/









int BinarySearch(int arr[], int left, int right, int k) {
    while (left <= right) {
        int m = (left + right) / 2;
        if (arr[m] == k) {
            return m;
        } else if(arr[m] > k) {
            right = m - 1;
        } else {
            left = m + 1;
        }
    }
    return (left * -1) - 1;
}


int main() {
    int arr[] = {1, 3, 4, 6};
    std::cout << "El elemento 0 está en la posicion: " << BinarySearch(arr, 0, 3, 0) << std::endl;
    std::cout << "El elemento 1 está en la posicion: " << BinarySearch(arr, 0, 3, 1) << std::endl;
    std::cout << "El elemento 2 está en la posicion: " << BinarySearch(arr, 0, 3, 2) << std::endl;
    std::cout << "El elemento 3 está en la posicion: " << BinarySearch(arr, 0, 3, 3) << std::endl;
    std::cout << "El elemento 4 está en la posicion: " << BinarySearch(arr, 0, 3, 4) << std::endl;
    std::cout << "El elemento 5 está en la posicion: " << BinarySearch(arr, 0, 3, 5) << std::endl;
    std::cout << "El elemento 6 está en la posicion: " << BinarySearch(arr, 0, 3, 6) << std::endl;
    std::cout << "El elemento 7 está en la posicion: " << BinarySearch(arr, 0, 3, 7) << std::endl;

    if (BinarySearch(di,ad,a,) < 0) {
        tomo las medidas necesarias por no encontrarlo.
    } else {
        tomo las medidas necesarias por si encontrarlo.
    }
    return 0;
}


















