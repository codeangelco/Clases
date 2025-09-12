#include <iostream>
using namespace std;

int main() {





    /* 
    
    menor y valor;

    valor -> el valor del producto actual que estamos leyendo.
    menor -> la variable que nos va a guardar el precio del producto mas bajo.




    menor > valor __> 10 > 4 = 1 > menor = valor = 4;

    if (menor > valor) {            menor = 10, valor = 4;
        menor = valor;
    }
    menor = 4, valor = 4;
    
    
    

    0 0 0 0 0
    





    int = 2.147.483.647
    int = 4 bytes;
    1 byte = 8 bits;
    1 bit -> 0 | 1;
         2^31  
    | 0 | 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0;

    64 bits = 18.446.744.073.709.551.616; = 1.8 x 10^19; 

    128 bits = 3.4 x 10^38;





    int array[];
    int arreglo[];
    
    array[5] = {1, 2, 3, 4, 5}
    string palabra = "sopa";
    char arr[4] = {'s', 'o', 'p', 'a'}              -->> palabra != char arr[] <<--
    
    */



    // tipo_De_Variable nombre_del_arreglo[] = {elemto1, elemento2, elemento3, ...};
    int numeros[] = {1, 2, 3, 4};
    double puntosDecimales[] = {1.5, 2.2324};
    char caracteres_sorpresa[] = {'s', 'o', 'p', 'a'};
    bool binario[] = {1, 0, 1, 0};



    // tipo_De_Variable nombre_del_arreglo[cantidad_de_elementos];
    char sopaDeLetras[10];
    int loteria[1000];

    

    int pasword[3] = {4,6,2};


    // int numeros[] = {10, 72, 45, 39, 20, 0, -1, 34, 78};
    //                  0   1   2   3   4   5   6   7   8

    int numeros2[]= {10, 72, 45, 39, 20, 0, -1, 34, 78};
    cout << numeros2[3] << endl;
    numeros2[3] = 1000;
    cout << numeros2[3] << endl;
    cout << endl;

    int n;
    cin >> n;
    int numeritos[n];
    int temp;
    for (int i = 0; i < n; i++) {
        cout << "#" << i + 1 << ": ";
        cin >> temp;
        numeritos[i] = temp;
    }
    cout << endl;
    for (int i = 0; i < n; i++) { // i = 0, 1, 2, 3;
        cout  << " | " << numeritos[i]; // n = 3; arr[3]; arr[3] = ?
    }
    cout << " |" << endl;


/* 
___________________________________
|*1                               |
|             *3[.....]           |
|                                 |
|                                 |   <<<----- Espacio de memoria
|                                 |     
|                                 |
|                    *2           |
|_________________________________|

*1 -> int a = 10;
*1 = 16f34a92341-1

*2 -> char letra = 'c';
*2 = 16f92a74923-3;

*3 -> int array[5];
*3 = 16f92a75923-9;    ------> [0]-[....] > bit = 0; bit = 72;

Decimal = 10; -> 0 1 2 3 4 5 6 7 8 9;
Binario = 2; -> 0 1;
Hexadecimal = 16; -> 0 1 2 3 4 5 6 7 8 9 A B C D E F   
E = 14;
2A = (16*2) + 10 = 42;
FB = (16 x 15) + 11 = 251
E2CA = (16 x 16 x 14) + (16 x 16 x 2) + (16 x 11) + 10 = 58058
FD5AFF4C = 4.250.599.244



*/


if (condition)
{
    /* code */
}



if (condition)
{
    /* code */
}
else
{
    /* code */
}



if (condition)
{
    /* code */
}
else if (condition)
{
    /* code */
}
else
{
    /* code */
}



while (condition)
{
    /* code */
}



do
{
    /* code */
} while (condition);



for (size_t i = 0; i < count; i++)
{
    /* code */
}


for (int i = /* length */ - 1; i >= 0; i--)
{
    /* code */
}










    return 0;
}