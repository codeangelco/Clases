// Enunciado:
// Escriba un programa que lea una matriz cuadrada de enteros de tamaño N x N (con 1 ≤ N ≤ 100).

// El programa debe:
// Implementar funciones propias para:

// (a) Llenar la matriz con valores dados por el usuario.
// (b) Mostrar la matriz en formato de tabla.
// (c) Calcular y devolver la suma de cada fila y cada columna (usando punteros para recorrer la matriz).
// (d) Revisar si la matriz solo contiene numeros pares, impares, o mixtos.
// (e) Calcular la raiz cudrada de cada suma hecha (<cmath>).

// El programa debe organizarse en funciones bien definidas.
// Se deben usar punteros en al menos una de las funciones para procesar la matriz.

// =====================================================================
// EJEMPLO 1.
// ----------

// Ingrese N: 3
// Ingrese los elementos de la matriz:
// 1 2 3
// 2 5 6
// 3 6 9

// -    -    -    -    -    -    -

// Matriz ingresada:
//    1   2   3
//    2   5   6
//    3   6   9

// Suma de filas y raíz:
// Fila 0:  6, 2.449489
// Fila 1:  13, 3.605551
// Fila 2:  18, 4.242640

// Suma de columnas y raíz:
// Columna 0:  6, 2.449489
// Columna 1:  13, 3.605551
// Columna 2:  18, 4.242640

// La matriz es mixta.
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void llenar_matriz(double **matrizzz,int ladoa,int ladob )
{
    int i=0;
    int k=0;
    for(i;i<ladoa;i++)
    {
        for(k;k<ladob;k++)
        {
            cin>>matrizzz[i][k];
        }
    }
}
void mostrar_matriz(double **matrizzz,int ladoa, int ladob)
{
    int i=0;
    int k=0;
    for(i;i<ladoa;i++)
    {
        for(k;k<ladob;k++)
        {
            cout<<" "<<matrizzz[i];
            cout<<" "<<matrizzz[k];
        }
    }
}

double recorrer_matriz(double **matrizzz,int ladoa,int ladob)
{
    double resultado = 0;
    for(double **it=matrizzz; it<matrizzz+(ladoa*ladob)+1; (*it)++)
    {
        resultado += **it;
    }
    return resultado;
}

// double numeros_im_par_mix(double** matrizzz, int ladoa, int ladob) // Por revisar
// {
//     int matriz_par[ladoa][ladob];
//     int matriz_impar[ladoa][ladob];
//     int matriz_mix[ladoa][ladob];
//     int i=0;
//     int k=0;
//     for(i;i=0;i<ladoa)
//     {
//         for(k;k=0;k<ladob;k++)
//         {
//             if(matrizzz[i][k]%2==0)
//             {
//                 matrizzz[i][k]=matriz_par[i][k];
//             }
//             if(matrizzz[i][k]%2!=0)
//             {
//                 matrizzz[i][k]=matriz_impar[i][k];
//                 matrizzz[i][k]=matriz_par[i][k];  
//             }
//         }
//     }
//     // return????
// }

// double matriz_imopar(double** matrizzz,double matriz_par[][])
// {
//     if(matriz_par%2==0)
//     {
//     cout<<"la matriz es par "<<endl;
//     }else if(matriz_impar=) 
// }

int main()
{
    // int ladoa=0;
    // int ladob=0;
    // double matriz[],[];
    // cout<<"ingresar el valor del primer lado de la matriz: "<<endl;
    // cin>>ladoa;
    // cout<<"ingresar el valor del segundo lado de la matriz: "<<endl;
    // cin>>ladob;
    // matriz[ladoa],[ladob];
    // llenar_matriz(matriz,ladoa,ladob);

    int x = 3;
    int y = 3;
    double matriz[y][x];
    llenar_matriz(&matriz);



    return 0;
}



// NOTA FINAL: 2.

// Matrices
// Funciones
// Punteros