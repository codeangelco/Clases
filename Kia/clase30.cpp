#include <iostream>
using namespace std;


// int comparar(int a, int b) {
//     return a > b ? a : b; // If ternario, si la condicion antes del signo de pregunta es verdadero, devuelve la primera opcion, si no, devuelve la segunda.
// }

// float comparar(float a, float b) {
//     return a > b ? a : b;
// }

// double comparar(double a, double b) {
//     return a > b ? a : b;
// }

// char comparar(char a, char b) {
//     return a > b ? a : b;
// }

// template <typename T, typename R>  <- Se usa para recibir tipos de datos no estrictos
// T comparar(T a, R b) {
//     return a > b ? a : b; // If ternario, si la condicion antes del signo de pregunta es verdadero, devuelve la primera opcion, si no, devuelve la segunda.
// }


// int main() {
//     char a = 'a';
//     int b = 80;

//     cout << comparar(b, a) << endl;


//     return 0;
// }

// template <typename T>
// class Dato {
//     private:
//         T *dato;
//     public:
//         Dato() {
//             dato = nullptr;
//         }

//         Dato(T nuevo_dato) {
//             dato = new T{nuevo_dato};
//         }

//         ~Dato() {
//             cout << "Se esta limpiando la memoria del Dato con valor: " << *dato << endl;
//             delete dato;
//         }

//         T getter() {
//             return *dato;
//         }

//         void setter(T nuevo_dato) {
//             delete dato;
//             dato = new T{nuevo_dato};
//         }
// };

// int main() {
//     Dato sopa1(2);
//     Dato sopa2(2.0);
//     Dato sopa3('2');
//     Dato sopa4("2.0");
//     Dato<char> sopa5;

//     cout << sopa1.getter() << endl;
//     cout << sopa2.getter() << endl;
//     cout << sopa3.getter() << endl;
//     cout << sopa4.getter() << endl;
//     sopa5.setter('a');
//     cout << sopa5.getter() << endl;

//     return 0;
// }


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

int main() {
    Vector<int> vec;
    Vector<string> vec2(2);

    cout << "Capacidad: " << vec2.capacity() << endl;
    cout << "Tamaño: " << vec2.size() << endl;

    vec2.push_back("Saturno");
    vec2.push_back("Juanpa");
    vec2.push_back("Kia");

    cout << "Capacidad: " << vec2.capacity() << endl;
    cout << "Tamaño: " << vec2.size() << endl;

    cout << "Vector: ";
    vec2.show();

    vec2.clear();

     cout << "Capacidad (despues del clear): " << vec2.capacity() << endl;
    cout << "Tamaño (despues del clear): " << vec2.size() << endl;

    cout << "Vector: ";
    vec2.show();



    return 0;
}


// #include <queue>

// int main() {
//     queue<int> cola;

//     // push: inserta copia del elemento al final
//     cola.push(10);
//     cola.push(20);

//     // emplace: construye el elemento en el contenedor (similar a push pero evita copias)
//     cola.emplace(5);

//     // front / back: acceso al primer y último elemento
//     cout << "Frente: " << cola.front() << endl; // 10
//     cout << "Final: " << cola.back() << endl;  // 5

//     // size / empty: tamaño y si está vacía
//     cout << "Tamaño: " << cola.size() << endl;
//     cout << "¿Vacía?: " << boolalpha << cola.empty() << endl;

//     // pop: elimina el elemento del frente
//     cola.pop(); // elimina 10
//     cout << "Frente tras pop: " << cola.front() << endl; // 20
//     cout << "Tamaño tras pop: " << cola.size() << endl;

//     // añadir más elementos
//     cola.push(30);

//     // swap: intercambia contenidos con otra cola
//     queue<int> otra;
//     otra.push(99);
//     otra.emplace(100);
//     cout << "Tamaños antes de swap -> cola: " << cola.size() << ", otra: " << otra.size() << endl;
//     cola.swap(otra);
//     cout << "Tamaños después de swap -> cola: " << cola.size() << ", otra: " << otra.size() << endl;

//     // recorrer y vaciar una cola usando front + pop
//     cout << "Vaciando 'otra': ";
//     while (!otra.empty()) {                  // empty + front + pop
//         cout << otra.front() << " ";
//         otra.pop();
//     }
//     cout << endl;

//     // para limpiar completamente una cola rápidamente: swap con una cola vacía
//     queue<int> vacia;
//     cout << "Tamaño de la cola vacia: " << vacia.size() << endl;
//     cola.swap(vacia);
//     cout << "Cola vaciada con swap. Tamaño cola: " << cola.size() << ", ¿Vacía?: " << boolalpha << cola.empty() << endl;


//     return 0;
// }