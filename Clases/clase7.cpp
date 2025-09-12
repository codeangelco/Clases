#include <iostream>
#include <string>

int main() {
    /* 
    ### NOS FALTA POR VER ### <- FUNDAMENTOS
        * Switch (Parecido a un if)  visto
        * Funciones
        * Librerias (Y sus funciones)
        * Manejo de Strings
        * Memoria
    
        !! Programacion Funcional
        !! Programar con estructuras
        !! POO


        -------------------------------------
        int a; <----- Asignaion de memoria fija. |
        char c;                                  | <---- En compilacion, memoria fija;
        float arr[]                              |

        int* a;                                  |
        char b;                                  | <---- En momento de ejecucion, memoria dinamica;
        char* puntero = &b;                      |
        
    */
    // int* arr = (int*)malloc(5 * sizeof(int));        // Malloc -> Memory Allocator
    // // std::cout << sizeof(int) << std::endl;
    // for (int i = 0; i < 5; i++) {
    //     std::cin >> arr[i];
    // }
    // for (int i = 0; i < 5; i++) {
    //     std::cout << arr[i] << std::endl;
    // }

    // arr = (int*)realloc(arr,6 * sizeof(int));
    // for (int i = 0; i < 6; i++) {
    //     std::cout << arr[i] << std::endl;
    // }

    // arr = (int*)calloc(6,sizeof(int)); 
    // for (int i = 0; i < 6; i++) {
    //     std::cout << arr[i] << std::endl;
    // }

    // free(arr);

    /* 
    malloc: Asigna memoria, dejando basura porque no inicializa los bits. Solo pide tamaño para asignar.
    calloc: Asigna memoria, inicalizando todos los bits a 0. Pide cantidad de elementos y tamaño de cada uno.
    realloc: Reasigna memoria, guardando los elementos pero dejando basura. Pide puntero y nuevo tamaño.
    free: Librela la memoria asignada manualmente.
    */

    // int;
    // char;
    // [];
    // bool;
    // std::string;

    /* 
    for (Inicializacion; Expresion Booleana; Actualizacion) {
        Instruciones/Codigo.
        .
        .
        .
    }
    */
    // int k = 0;
    // for (int i = 0; k < 3; k++) {
    //     std::cout << i << std::endl;
    // }

    // ----------------------------------------------------------------------------------------
    // int numero = 12345;

    // switch (numero) {
    //     case 4:
    //         std::cout << "Colombia" << std::endl;
    //         break;
    //     case 1234:
    //         std::cout << "Chile" << std::endl;
    //         break;
    //     case 3:
    //         std::cout << "Urugay" << std::endl;
    //         break;
    //     default:
    //         std::cout << "son paises." << std::endl;
    //         break;
    // }

    // std::string palabra;
    // std::cin >> palabra;
    // std::cout << palabra;


    /*

    arr[] = {-2147000000, 2, 4, 6, -2147000000, -2147000000};
             0   1  2  3  4  5

        comenzamos sacando el mas grande;
        for() {} para recorrer el arreglo;
        cuando encuentres el numero mas grande;
        tambien guardamos la posicion del mas grande;
        el mas grande -> arreglo_de_grandes[];
        arreglo_de_grandes[0] = arr[5];
        arr[5] = -2147000000;





        ...
        .
        .
        .
        .



















     
    # Tarea:
        Guarda n numeros en un arreglo, decir cual es el mas pequeño, y cuales son los 3 más grandes.
        Y si el numero digitado por el usuario es multiplo de 7 y al mismo tiempo de 13, no colocarlo e ignorarlo,
        en cambio colocar ese numero, multiplicado por 0.5

        el usuario te da un numero que es el valor de n, n va a ser el tamaño del arreglo. Despues va a leer
        n numeros, tiene que revisar si la condicion para no colocarlos dentro del arreglo se cumple.
        despues imprimir en pantalla el arreglo, el mas pequeño, y en un arreglo aparte, mostrar los 3 mas grandes.
    */
    int arreglo_de_grandes[] = {5, 7, 9};
    int arreglo[] = {1, 0, 0, 0, 0, 1};
    int posicion = -1, mayor = -2147483647;
    int t = 2;

    while (t--) {
        mayor = -2147483647;
        for (int i = 0; i < 6; i++) {
            if(arreglo[i] > mayor) {
                mayor = arreglo[i];
                posicion = i;
            }
        }
        arreglo[posicion] = -1;
    }
    
    for (int i = 0; i < 6; i++) {
        if(arreglo[i] < mayor) {
            mayor = arreglo[i];
            posicion = i;
        }
    }
    arreglo[posicion] = -1;

    for (int i = 0; i < 6; i++) {
        std::cout << arreglo[i] << std::endl;
    }


    /* 
    int k = 0;
    for (int i = 0; i < 6; i++) {
        if (arreglo[i] == 1) {
            arreglo[i] = arreglo_de_grandes[k];
            k++;
        }
    }

    

    for (int i = 0; i < 6; i++) {
        std::cout << arreglo[i] << std::endl;
    } */
    return 0;
}