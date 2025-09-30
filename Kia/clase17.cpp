#include <iostream>
using namespace std;

int main() {

    // // ### BOOLEANS
    // bool flag = true, flog = false;
    // // bool -> true(1) | false(0)
    // int a = 0; // <- falso
    // int b = 1; // <- verdadero

    // cout << flag << endl;
    // cout << flog << endl;

    // flag = 1;
    // cout << flag << endl;
    // cout << true << endl;

    // int c = 10;
    // flag = c % 2 == 0;
    // if (flag) {
    //     cout << "Flag es verdadero!" << endl;
    // } else {
    //     cout << "Flag es falso!" << endl;
    // }
    // ___________________________________________/



        // ### Continuacion de punteros (memoria);

    // Iterador -> El iterador, es un puntero, que nos ayuda a recorrer por memoria estructuras.


    // char arr[] = {'h', 'o', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o', '\0'};
    // cout << arr << endl;

    // char* p = arr;
    // cout << *p << endl;

    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl; // imprimir lo que haya en la direccion de memoria arr + i;
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << arr + i << " = " << *(arr + i) << endl;
    // }

    // cout << sizeof(char) << endl;
    // cout << sizeof(int) << endl;

    // cout << &arr << endl;

    // for (int i = 0; i < 11; i++) {
    //     cout << &arr + i << endl;
    // }

    int arr[] = {1, 10, -2, 4, 6};
    int length = 5; // el tamaño del arreglo
    // int* p = arr;

    // cout << *p << endl;
    // cout << *(p + 1) << endl;
    // cout << *(p + 2) << endl;

    // arr + i <- i = 4;
    // i = 5; i < 5? falso, break;


    for (int* it = arr; it < arr + length; it++) {
        cout << *it << endl;
    }








    // Hacer un programa que lea n, siendo n el tamaño de un arreglo. El usuario rellenara el arreglo, y mediante un iterador, recorrer el arreglo y mostralo en pantalla




    // int arr[] = {1, 2};
    cout << sizeof(int) << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr)/sizeof(int) << endl;




    return 0;
}


/* 
int a; -> guarda: Direccion, dato;
int arr[]; -> guarda: Direccion, datos;


char -> 0 , 255
char -> 1 byte
1 byte = 8 bits
(2 ^ 8) - 1 = 255




*/