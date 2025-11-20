#include <iostream>
#include <vector>
using namespace std;


using sopa = const char[20];

/* // El uso de typedef se ha quedado como un concepto viejo, modernamente se utiliza el using.
Porque el using permite hacer plantillas, mientras que el typedef no. Lo cual hace al using mas poderoso.
Entonces se volvio una herramienta obsoleta, pero aun se encuentra en codigo viejo.
En cambio el using es la forma moderna de hacer alias de tipos en C++.
Puedes seguir usando typedef si quieres, pero se recomienda usar using en su lugar.
Pero en efecto, cumplen la misma funcion basica de crear alias de tipos.

typedef char cadena1[30];

typedef vector<vector<int>> Matriz1;

// No se puede hacer typedefs de plantillas, pero con using si se puede
// Error
// typedef vector<vector<T>> Matriz2;


using cadena2 = char[30];

// Plantilla para matrices de enteros
using Matriz2 = vector<vector<int>>;

// Plantilla para matrices de cualquier tipo
template<typename T>
using Matriz3 = vector<vector<T>>;

int main() {

    Matriz2 matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    Matriz1 otra_matriz = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    Matriz3<double> matriz_double = {
        {1.1, 2.2, 3.3},
        {4.4, 5.5, 6.6},
        {7.7, 8.8, 9.9}
    };

    // ERROR
    Matriz2 matriz_error = {
        {2.0, 3.5, 4.1},
        {5.2, 6.3, 7.4}
    }

    return 0;
} */
/* 
typedef int t_arreglo_5[5];
typedef int t_arreglo_10[10];

using u_arreglo_5 = int[5];
using u_arreglo_10 = int[10];

struct Cordenadas{
    u_arreglo_5 x;
    u_arreglo_10 y;
};

void mostrarCordenadas(const int arreglo[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << endl;
    }
}

int main() {
    Cordenadas cordenadas {
        {1, 2, 3, 4, 5},
        {9, 8, 7, 6, 5, 4, 3, 2, 1}
    };

    cout << "Hola mundial!" << "endl;" << endl;

    cout << "Cordenadas en x:" << endl;
    mostrarCordenadas(cordenadas.x, 5);
    cout << "Cordenadas en y:" << endl;
    mostrarCordenadas(cordenadas.y, 10);

    u_arreglo_10 otro_arreglo = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Otro arreglo:" << endl;
    mostrarCordenadas(otro_arreglo, 10);



    return 0;
}

 */


// Ejercicio con using y estrcturas
// Utilizar using para definir los tipos de datos necesarios
// Entonces, crear una estructura de estudiante, que contenga nombre, edad, carrera, notas y una contraseña
// Inicar con unos datos predefinidos
// Pedir al usuario que ingrese su nombre y contraseña
// Si el nombre y contraseña coinciden, mostrar los datos del estudiante
// Si no coinciden, mostrar un mensaje de error y terminar el programa
// Y que el usuario pida si paso o no la materia, calculando el promedio de las notas.

using texto = string;
using u_edad = unsigned int;
using u_notas = double[3];

struct Estudiante {
    texto nombre;
    u_edad edad;
    texto carrera;
    u_notas notas;
    texto password;
};

using u_estudiantes = Estudiante[3];
using numero = int;
using decimal = double;

u_estudiantes estudiantes = {
    {"Juan", 18, "Ingenieria", {5.0, 4.7, 2.0}, "clave123"},
    {"Ana", 20, "Medicina", {6.0, 7.0, 8.0}, "clave456"},
    {"Luis", 19, "Derecho", {4.0, 5.0, 6.0}, "clave789"}
};

int buscaEstudiante(const texto nombre) {
    for (numero i = 0; i < 3; i++) {
        if (estudiantes[i].nombre == nombre) {
            return i;
        }
    }
    return -1;
}

int main() {
    texto nombre, password;

    cout << "\tHola estudiante!" << endl;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    numero id = buscaEstudiante(nombre);
    if (id == -1) {
        cout << "Estudiante no encontrado." << endl;
        return 0;
    } else {
        cout << "Estudiante autenticado exitosamente!\nBienvenido " << estudiantes[id].nombre << endl;
    }
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (password != estudiantes[id].password) {
        cout << "Contraseña incorrecta." << endl;
        return 0;
    }
    cout << "\nDatos del estudiante:" << endl;
    cout << "Nombre: " << estudiantes[id].nombre << endl;
    cout << "Edad: " << estudiantes[id].edad << endl;
    cout << "Carrera: " << estudiantes[id].carrera << endl;
    decimal promedio = (estudiantes[id].notas[0] + estudiantes[id].notas[1] + estudiantes[id].notas[2]) / 3.0;
    cout << "Promedio de notas: " << promedio << endl;
    if (promedio >= 4.0) {
        cout << "Felicidades, has pasado la materia!" << endl;
    } else {
        cout << "Lo siento, no has pasado la materia." << endl;
    }
    return 0;
}