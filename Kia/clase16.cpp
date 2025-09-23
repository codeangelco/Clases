#include <iostream>
#include <vector>
using namespace std;

void revisar_puntero(int* puntero, int* varibale) {
    if (puntero == varibale) {
        cout << "El puntero apunta a esa varibale." << endl;
    } else {
        cout << "El puntero no apunta a esa variable." << endl;
    }
}


void suma(int& resultado, int& a, int& b) {
    resultado = a + b;
    a = 0;
    b = 0;
}



int main() {
    // ### Punteros.

    int* p; // Un puntero, es una variable, que no guarda datos, si no direcciones de memoria.

    // int a = 10;
    // cout << &a << endl;
    // p = &a;
    // cout << &p << endl;
    // cout << p << endl;

    // int b = a;
    // revisar_puntero(p,&b);

    // cout << *p << endl;
    int resultado;
    int a, b;
    cin >> a >> b;
    suma(resultado,a,b);
    cout << a << " " << b << "\nResultado: " << resultado << endl;

    
    // int **matriz;


    return 0;
}



// a = 10;
// b = &a;
// b -> direccion que guarda;
// &b -> direccion de b;
// *b -> espacio al que apunta la direccion que guarda b; (valor de b)



// void printArray(int* first, int* last) {
//     while (first != last) {
//         cout << *first++ << endl;
//     }
    
// }