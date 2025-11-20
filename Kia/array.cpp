#include <iostream>
#include <array>
using namespace std;


class Arreglo {
    private:
        int *arreglo;
        size_t size;
        int *posicion_inicial;
    public:
        Arreglo(size_t nuevo_size) {
            arreglo = new int[nuevo_size];
            size = nuevo_size;
        }

        int at(size_t id) { return arreglo[id]; }

        void limpiar() {
            for (size_t i = 0; i < size; i++) {
                *(arreglo + i) = 0;
            }
        }

        void mostrar() const {
            for (size_t i = 0; i < size; ++i) {
                cout << arreglo[i];
                if (i + 1 < size) cout << ' ';
            }
            cout << '\n';
        }

        void rellenar() {
            for (size_t i = 0; i < size; i++) {
                int temp;
                cin >> temp;
                *(arreglo + i) = temp;
            }
        }
};



int main() {
    // Arreglo arr(3);

    // arr.mostrar();

    // arr.rellenar();

    // arr.mostrar();

    // cout << arr.at(2) << endl;

    // arr.limpiar();

    // arr.mostrar();
    return 0;
}