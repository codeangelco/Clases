#include <iostream>
using namespace std;

template <typename Juanpa>
class Vector {

    private:
        Juanpa *data;
        unsigned int _size;
        unsigned int _capacity;


        void upCapacity() {
            if (!_capacity) {
                _capacity++;
            }
            _capacity *= 2;
            Juanpa *temp_data = new Juanpa[_capacity];
            for (int i = 0; i < _size; i++) {
                temp_data[i] = data[i];
            }
            delete[] data;
            data = temp_data;
        }

    public:

        // CONSTRUCTORES

        Vector() {
            data = nullptr;
            _size = 0;
            _capacity = 0;
        }

        Vector(unsigned int cantidad) {
            data = new Juanpa[cantidad];
            _size = 0;
            _capacity = cantidad;
        }


        // DESTRUCTOR

        ~Vector() {
            cout << "Eliminando..." << endl;
            delete[] data;
            _size = 0;
            _capacity = 0;
        }


        // GETTERS

        void show() {
            cout << "[";
            for (int i = 0; i < _size; i++) {
                cout << data[i] << (i < _size - 1 ? ", " : "");
            }
            cout << "]" << endl;
        }

        unsigned int capacity() { return _capacity; }

        unsigned int size() { return _size; }

        Juanpa at(const unsigned int id) {
            if (id >= _size) {
                cerr << "ERROR: Se intento acceder a una posicion invalida." << endl;
                exit(1);
            }

            return data[id];
        }


        // SETTERS

        // Desabilitamos el operador= por el error de copia
        // Vector<Juanpa>& operator=(const Vector<Juanpa> &other) = delete;

        // Creamos el metodo copy para copiar vectores si es necesario
        void copy(const Vector<Juanpa> &other) {
            delete[] data; // Liberamos la memoria actual

            _size = other._size;
            _capacity = other._capacity;
            data = new Juanpa[_capacity];
            for (unsigned int i = 0; i < _size; i++) {
                data[i] = other.data[i];
            }
        }

        Juanpa& operator[](const unsigned int id) const { 
            if (id >= _size) {
                cerr << "ERROR: Se intento acceder a una posicion invalida." << endl;
                exit(1);
            }
            return data[id]; }

        void set_at(Juanpa nuevo_dato, unsigned int id) { data[id] = nuevo_dato; }

        void push_back(Juanpa nuevo_dato) {
            if (_size == _capacity) {
                upCapacity();
            }
            data[_size] = nuevo_dato;
            _size++;
        }

        void clear() {
            delete[] data;
            _size = 0;
            data = new Juanpa[_capacity];
        }


};

void cambiarValor(int &variable) {
    variable = -99;
}

int& cambiarEnMain(int &variable) {
    return variable;
}

int main() {
    // int numero = 10;
    // cout << numero << endl;
    // cambiarValor(numero);
    // cout << numero << endl;

    // cambiarEnMain(numero) = 777;
    // // Lo que hagamos a 'nuevo_numero' va a afectar a 'variable' porque devolvimos a 'variable' por referencia.
    // // Y lo que le hagamos a 'variable' va a afectar a 'numero', porque recibimos a 'numero' por referencia.
    // // Entonces, lo que le hagamos a 'nuevo_numero' va a afectar a 'numero'.

    // cout << numero << endl;

    Vector<int> vec;

    // Info basica del vector
    cout << "Capacidad: " << vec.capacity() << endl;
    cout << "Tamaño: " << vec.size() << endl;
    vec.show();

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);
    vec.push_back(90);

    vec.show();
    cout << "Capacidad: " << vec.capacity() << endl;
    cout << "Tamaño: " << vec.size() << endl;

    cout << "Elemento 1 en la posicion 0: " << vec[0] << endl;
    
    // Modificando el elemento en la posicion 0 con el operador[]
    vec[0] = 111;
    cout << "Elemento 1 en la posicion 0 (despues de modificarlo): " << vec[0] << endl;

    // Modificamos mas elementos
    vec[1] = 222;
    vec[2] = -33;
    vec[vec.size() - 1] = 0;

    // Mostramos el vector modificado
    vec.show();

    // Demostrando un error
    // cout << "Intentando acceder a la posicion 20 (fuera de rango): " << endl;
    // cout << vec[20] << endl;

    // Demostrando otro error (error copia)
    // Vector<int> vec2 = vec;

    // Despues de operador= = delete
    Vector<int> vec2;
    // vec2 = vec; // Error de compilacion

    // Despues de crear el metodo copy
    vec2.copy(vec);
    cout << "Vector 2 (despues de copiar el vector 1): ";
    vec2.show();

    // Separador
    cout << "------------------------" << endl;

    int *arr1 = new int[5]{1,2,3,4,5};
    cout << arr1 << endl;

    int *arr2 = arr1;
    cout << arr2 << endl;


    delete[] arr1;
    // delete[] arr2; // ERROR: doble liberacion de memoria

    return 0;
}