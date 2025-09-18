#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int decimal_a_binario(int numero) {
    int residuo, posicion=0, resultado=0;
    do {
        residuo = numero % 2; 
        resultado += residuo * pow(10,posicion);
        posicion++;
        numero = numero / 2;
    } while (numero > 0);
    return resultado;
}


int main() {
    string palabra;
    cin >> palabra;
    int size = palabra.length();
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = decimal_a_binario((int)palabra[i]);
    }
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}