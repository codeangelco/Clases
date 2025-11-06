// /home/angel/codes/Clases/Kia/iterador.cpp
#include <iostream>
#include <vector>
using namespace std;


class iterator {
    private:
        int *direccion_memoria;
    public:
        int* base() {return direccion_memoria; }
};

int main() {
    // ITERADOR DE ARREGLOS NORMALES
    int arr[] = {3, 2, 1};

    cout << arr << endl;
    cout << &(arr[0]) << endl; // Aca se demuestra que arr guarda la direccion de memoria del primer elemento.

    int *it = arr;
    cout << it << endl;
    cout << *it << endl;
    it += 2;
    cout << *it << endl;

    // ITERADOR DE VECTORES
    vector<int> vec = {3, 2, 1};
    cout << &(vec[0]) << endl;
    cout << vec.begin().base() << endl;

    vector<int>::iterator it_v = vec.begin();
    cout << it_v.base() << endl;

    cout << *it_v << endl;
    it_v += 2;
    cout << *it_v << endl;

    return 0;
}