#include <iostream>
using namespace std;

// void cambiarSin(int valor) {
//     valor = -999;
// }

// void cambiarCon(int &valor) {
//     valor = -999;
// }

// void cambiarCon(int *valor) {
//     *valor = -999;
// }

// int main() {
//     int a = 10;

//     int *p;
//     p = &a;

//     // cambiarSin(a);
//     cambiarCon(p);
//     cout << a << endl;


//     // cout << &a << endl;
//     // cout << p << endl;
//     // cout << &p << endl;
//     // cout << *p << endl;
//     // *p = -123;
//     // cout << *p << endl;
//     // cout << a << endl;

//     int *punt = nullptr;
//     punt = new int{20};
//     cout << *punt << endl;
//     delete punt;

//     return 0;
// }

// class vector_mio {
//     private:
//         int *arr;
//         int capacidad;
//         int size_t;
//     public:
//         vector_mio() {
//             arr = nullptr;
//             capacidad = 0;
//             size_t = 0;
//         }

//         int size() {return size_t; }

//         int operator[](int id) {
//             return 2;
//         }

//         int operator()(char c) {
//             return c;
//         }

//         int front() {
//             return arr[0];
//         }

//         int back() {
//             return arr[size_t - 1];
//         }
// };

// #include <vector>

// int main() {

//     vector<int> vector1;
//     vector1.reserve(6);
//     vector1.push_back(1);
//     vector1.push_back(2);
//     vector1.push_back(3);
//     vector1.push_back(4);
//     vector1.push_back(5);
//     vector1.push_back(6);
//     vector1.push_back(7);
//     cout << vector1.size() << endl;
//     cout << vector1.capacity() << endl;

//     cout << vector1[1] << endl;

//     cout << vector1.front() << endl;
//     cout << vector1.back() << endl;

//     auto it = vector1.begin();
//     it++;
//     vector1.erase(it);
//     cout << vector1.at(1) << endl;
//     vector1.clear();
//     cout << vector1.size() << endl;
//     cout << vector1.capacity() << endl;
//     cout << vector1.empty() << endl;
    


//     // vector_mio vector1;
//     // cout << vector1.size() << endl;
//     // cout << vector1('a') << endl;

//     return 0;
// }

#include <stack>

int main() {
    stack<string> cuadernos;
    cuadernos.push("Matematicas");
    cuadernos.push("Filosofia");
    cuadernos.push("Ingles");
    cuadernos.push("Fisica");

    string cuaderno;
    cout << "Ingrese el nombre del cuaderno que desea obtener de la pila de cuadernos: ";
    cin >> cuaderno;

    for (int i = 0; !cuadernos.empty(); i++) {
        if (cuadernos.top() == cuaderno) {
            cout << "Su caderno estaba en la posicion " << i + 1 << " de arriba hacia abajo!" << endl;
            return 0;
        }
        cuadernos.pop();
    }
    
    cout << "El cuaderno no estaba en la pila!" << endl;

    return 0;
}