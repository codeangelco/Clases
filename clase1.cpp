#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a = 45;
    double b = 1.225;
    float ni = 1.23123;
    char c = 99;
    bool bandera = 1;
    string texto = "Hola mundo!";
    cout << texto << endl;
    cout << "Hola maki" << endl;


    if (a < 50) {
        cout << "a es mayor a 10" << endl;
    } 
    if (a == 45) {
        cout << "a no es mayor a 10" << endl;
    }



    if (a == 45) {
        cout << "Hola mundo\n";
        a = a + 20;
        cout << c << endl;
        if (a == 65) {
            cout << "SI" << endl;
        }
    }


    int numero = 10;
    int numero2 = 20;
    double suma = (double)numero / (5 + (double)numero2) * 2;
    cout << pow(2,2) << endl;
    cout << suma << endl;


    return 0;
}