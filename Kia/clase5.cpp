#include <iostream>
using namespace std;

int main() {
    // int largo;
    // cin >> largo;
    // int arr[largo];
    // int temp;
    // for (int i = 0; i < largo; i++) {
    //     cin >> temp;
    //     arr[i] = temp;
    // }

/* 
    arr[5] = {1, 5, 9, 0, -2}
              0  1  2  3   4   5


    arr[5] = {X, X, X, X, X};
                                        size_arr = 5
    for (int i = 0; i < size_arr; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

 */



    // for (int variable = 0; variable < 10; variable++) {
    //     cout << "Hola";
    // }
/* 
    ### MOSTRAR UN ARREGLO ###
    for (int i = 0; i < longitud; i++)
    {
        cout<<"el valor es: "<<arreglo[i]<<endl;
    }

     */




     // Genere un codigo, donde calcule todos los numeros impares hasta el 20, menos el 15;
// i=0 v; i=1 v; i=2 v; i=3 v; i=4 v; i=5 v; i=6 v; i=7 v; i=8 v; i=9 v; i=10 f;
    // for (int i = 0; i < 20; i++) {
    //     if (i == 15) {
    //         continue;
    //     }
    //     if (i%2==1) {
    //         cout << i << endl;
    //     }
    // }


    string palabra = "sopa";  // {'s','o','p','a','\0'} ... palabra[5]
    cout << palabra << endl;


    int i;
    cin >> i;
    int largo = 0;
    while (i != 0) {
        cout << i << endl;
        largo++;
        cin >> i;
    }
    cout << "Usted ingreso " << largo << " numeros\n";
    


    // int i;
    // int suma = 0;
    // cin >> i;
    // while (1) {
    //     suma += i;       // suma += 1 + 2 + 61 + 87.
    //     cin >> i;
    // }
    

    if (1 < 10) cout << "Si";

    if (10 < 100) {
        cout << "Sopa" << endl;
        cout << "Si" << endl;
    }






    int a;
    int b = 10;
    int c;


    int a, b = 10, c;



    /* 
    ### PROXIMA CLASE ###

    a) ver cosas nuevas -> funciones, bibliotecas, + estructuras(switch, strings, ...).
    b) respaso general, + estructuras(switch, strings, ...).
    c) refuerzo de todo lo visto + ejercicios.   <<<<<<------- WINER
    d) Enfoque en problemas de competencia.


    */

    switch (expression)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}