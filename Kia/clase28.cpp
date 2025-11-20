#include <iostream>
using namespace std;

class arreglo_dinamico {
    private:
        int *arr;
        int size;
        int max_size;

        void mas_espacio() {
            max_size *= 2;
            int *nuevo_arr = new int[max_size];
            for (int i = 0; i < size; i++) {
                nuevo_arr[i] = arr[i];
            }
            arr = nuevo_arr;
        }

    public:
    
        arreglo_dinamico() {
            size = 2;
            max_size = 2;
            arr = new int[max_size];
        }

        int at(int id) { return arr[id]; }

        void set_at(int value, int id) { arr[id] = value; }

        void push_back(int nuevo_valor) {
            if (size == max_size) {
                mas_espacio();
            }
            arr[size] = nuevo_valor;
            size++;
        }

        int getSize() { return size; }

        int getMaxSize() { return max_size; }

};


void mostrar(arreglo_dinamico &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << arr.at(i) << " ";
    }
    cout << endl;
}

int main() {

    arreglo_dinamico arr;
    cout << "Tamaño acutal " << arr.getSize() << endl;
    cout << "Tamaño maximo " << arr.getMaxSize() << endl;

    mostrar(arr);

    arr.set_at(2, 0);
    arr.set_at(7, 1);

    cout << "Tamaño acutal " << arr.getSize() << endl;
    cout << "Tamaño maximo " << arr.getMaxSize() << endl;

    mostrar(arr);

    arr.push_back(102);

    cout << "Tamaño acutal " << arr.getSize() << endl;
    cout << "Tamaño maximo " << arr.getMaxSize() << endl;

    mostrar(arr);

    return 0;
}