#include <iostream>
using namespace std;

int main() {
    
    // for (tipo_de_variable variable_con_valor; condicion_de_parada; instruccion_unica) {}
    for (int i = 3; i > 0; i--) {
        cout << 10 << endl;
    }

    int arr[] = {10,20,30,40,50};
    for (int posicion = 0; posicion < 5; posicion++) { 
        cout << arr[posicion] << endl;
    }
    /* 
    1. posicion = 0; posicion < 5? si;
        arr[posicion] = 10;
        .
        .
        .
        .
        .
        .
        .
        posicion++;
    2. posicion = 1; posicion < 5? si;
        arr[posicion] = 20
        posicion++;
    3. posicion = 2; posicion < 5? si;
        arr[posicion] = 30
        posicion++;
    4. posicion = 3; posicion < 5? si;
        arr[posicion] = 40
        posicion++;
    5. posicion = 4; posicion < 5? si;
        arr[posicion] = 50
        posicion++;
    6. posicion = 5; posicion < 5? no; ---->>> break;
    
    
    
    */



    int arreglo[1000];
    int length=0;
    int n;
    cin >> n;
    while (n)
    {
        arreglo[length] = n;
        length++;
    }

    for (int i = 0; i < length; i++) {
        cout << arreglo[i] << endl;
    }
    

    return 0;
}