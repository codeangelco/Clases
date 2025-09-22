#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    // ### Librerias.
    // std::cout << pow(16,0.5) << std::endl;
    // std::cout << sqrt(16) << std::endl;
    // std::cout << abs(-15) << std::endl;


    // Con la magnitud de un vector y su direccion, calcular las componenetes. Ejemplo con velocidades.
    // double magnitud, direccion, mag_y, mag_x;
    // std::cin >> magnitud >> direccion; // -> radianes = grados * (pi/180)
    // direccion = direccion * (3.141592/180);
    // mag_y = magnitud * sin(direccion);
    // mag_x = magnitud * cos(direccion);
    // std::cout << "Velocidad en el eje X: " << mag_x << "\nVelocidad en el eje Y: " << mag_y << std::endl;

    // Calcular cuanto se desplaza una particula, en el eje X, si su velocidad es 45.00 m/s con una direccion de 76 grados.

    // string palabra;
    // string palabra2 = "Hola, mundo!";
    // cout << palabra2 << endl;

    // getline(cin, palabra);
    // cout << palabra << endl;

    

    // for (char letra : palabra) {
    //     cout << letra << " ";
    // }
    // cout << endl;

    // int arr[] = {1,2,3};
    // for (int numero : arr) {
    //     numero = 0;
    // }
    // for (int numero : arr) {
    //     cout << numero << " ";
    // }
    // cout << endl;

    // string palabra;
    // int size;

    // getline(cin,palabra);

    // size = palabra.length();
    // for (int i = size; i >= 0; i--) {
    //     cout << palabra[i];
    // }
    // cout << endl;

    // string o1 = "Hola"; 
    // string o2 = "mundo";
    // cout << o1 + " " + o2; // "Hola" + " " + "mundo" = "Hola mundo";
    // El + en los estring es una concatenacion.

    // string palabra = "Sopa";
    // cout << palabra[0]; // Accede por posicion.
    // cout << palabra.at(1); // Accede por posicion.
    // cout << palabra.back(); // Accede al ultimo elemento.
    // cout << palabra.front(); // Accede al primer elemento.

    // string palabra = "Sopa";
    // cout << palabra.size() << endl;
    // cout << palabra.length() << endl;

    // string palabra = "Sopa";
    // string subcadena = palabra.substr(0,3);
    // cout << subcadena << endl;

    string palabra;
    cin >> palabra;
    int numeros[palabra.length()];
    int i = 0;
    for (char letra : palabra) {    // char letra, va a ser la variable que recorra todas las posicoones del arreglo palabra
        numeros[i++] = binario((int)letra);
    }
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;




    return 0;
}

int binario(int numero) {
    .
    .
    .
    return;
}