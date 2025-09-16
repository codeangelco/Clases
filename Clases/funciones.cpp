#include <iostream>
using namespace std;


void imprimir_arreglo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void crear_arreglo(int arr[], int new_arr[], int ignorar) {
    for (int i = 0, k = 0; i < 4; i++) {
        if (i == ignorar) {
            continue;
        }
        new_arr[k] = arr[i];
        k++;
    }
}
/* 
    arr[] = {7, 9, 5, 2};
    arr1[] = {7, 9, 2};
    
    int i = 0, k = 0, ignorar = 2;
        i = 0. k = 0. -> arr1[0] = arr[0] = 7; i++; k++;
        i = 1. k = 1. -> arr1[1] = arr[1] = 9; i++; k++;
        i = 2. k = 2. -> i++;
        i = 3. k = 2. -> arr1[2] = arr[3] = 2; i++; k++;
        new_arr => arr1

*/

void imprimir_todo(int arr[], int arr1[], int arr2[], int arr3[], int arr4[]) {
    crear_arreglo(arr, arr1, 0);
    crear_arreglo(arr, arr2, 1);
    crear_arreglo(arr, arr3, 2);
    crear_arreglo(arr, arr4, 3);
    imprimir_arreglo(arr,4);
    imprimir_arreglo(arr1,3);
    imprimir_arreglo(arr2,3);
    imprimir_arreglo(arr3,3);
    imprimir_arreglo(arr4,3);
}


int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    int arr1[3], arr2[3], arr3[3], arr4[3];

    imprimir_todo(arr,arr1,arr2,arr3,arr4);
    return 0;
}