#include <iostream>
using namespace std;

 // ESTRUCTURAS

// typedef char cadena[3];

// typedef struct {
//     char id;
//     cadena sector;
//     int cord_x;
//     int cord_y;
// } Cordenada;

// void muestraCord(Cordenada cordenada_temp) {
//     cout << "El punto " << cordenada_temp.id << " que esta en el sector " << cordenada_temp.sector << " esta en x: " << cordenada_temp.cord_x << " y en y: " << cordenada_temp.cord_y << endl;
// }

// int main() {

//     Cordenada cordenada_1 = {'A', "2D", 1, 2};

//     muestraCord(cordenada_1);
    
//     return 0;
// }


// typedef char cadena_txt[10];

// typedef struct {
//     cadena_txt nombre;
//     int edad;
//     double altura;
//     cadena_txt fecha_nacimiento;
// } Dato_personal;

// int main() {

//     Dato_personal persona_1;

//     cout << "Ingresa tu nombre: ";
//     cin >> persona_1.nombre;
//     cout << "Ingresa tu edad: ";
//     cin >> persona_1.edad;
//     cout << "Ingresa tu altura: ";
//     cin >> persona_1.altura;
//     cout << "Ingresa tu fecha de nacimiento: ";
//     cin >> persona_1.fecha_nacimiento;

//     cout << "\nDatos ingresados:\n";
//     cout << "Nombre: " << persona_1.nombre << endl;
//     cout << "Edad: " << persona_1.edad << endl;
//     cout << "Altura: " << persona_1.altura << endl;
//     cout << "Fecha de nacimiento: " << persona_1.fecha_nacimiento << endl;

//     return 0;
// }

// struct Libro {
//     string nombre;
//     int paginas;
//     string fecha;
// };

// int main() {
//     int size;
//     cout << "Ingrese la cantidad de libros a guardar: ";
//     cin >> size;

//     struct Libro libros[size];

//     for (int i = 0; i < size; i++) { 
//         cout << "Ingrese el nombre del libro #" << i + 1 << ": ";
//         cin >> libros[i].nombre;

//         cout << "Ingrese la cantidad de paginas del libro #" << i + 1 << ": ";
//         cin >> libros[i].paginas;

//         cout << "Ingrese la fecha del libro #" << i + 1 << ": ";
//         cin >> libros[i].fecha;
//     }

//     int op;
//     while (true) {
//         cout << "\tIngrese la opcion que desee!" << endl;

//         cout << "0. Salir\n1. Revisar un libro" << endl;
//         cout << "/: ";
//         cin >> op;

//         if (op == 0) {
//             break;
//         }

//         cout << "Ingrese el numero de libro a revisar: ";
//         cin >> op;

//         if (op < 1 || op > size) {
//             cout << "Numero de libro invalido." << endl;
//         } else {
//             int idx = op - 1;
//             cout << "Libro #" << op << ":" << endl;
//             cout << "Nombre: " << libros[idx].nombre << endl;
//             cout << "Paginas: " << libros[idx].paginas << endl;
//             cout << "Fecha: " << libros[idx].fecha << endl;
//         }
//     }
    
//     cout << "\nBiblioteca cerrada!" << endl;

//     return 0;
// }

struct Cuenta {
    string nombre;
    int fondo;
    string password;
};

struct Cuenta cuentas[] = {
    {"Juan", 1'234'123, "sopa1234"},
    {"Gabriel", 10'000, "casita-rosada78"},
    {"Felipe", 924'222, "trt4mundos"}
};

int buscaCuenta(string nombre) {
    for (int i = 0; i < 3; i++) {
        if (nombre == cuentas[i].nombre) {
            return i;
        }
    }
    return -1;
}

int main() {
    int op, value;
    string nombre, password;
    while (true) {
        cout << "\tBienvenido al banco central!" << endl;
        cout << "Ingrese su nombre: ";
        cin >> nombre;

        int id = buscaCuenta(nombre);
        if (id < 0) {
            cout << "Cuenta no encontrada!" << endl;
            return 0;
        }
        
        // Falto revisar la contraseña!

        while (true) {
            cout << "\n\tBienvenido " << nombre << endl;
            cout << "0. Salir\n1. Visualizar saldo\n2. Ingresar dinero\n3. Retirar dinero\n/: ";        
            cin >> op;

            if (op == 0) {
                cout << "Gracias por su visita!" << endl;
                return 0;
            }

            if (op == 1) {
                cout << "Saldo: " << cuentas[id].fondo << endl;
            } else if (op == 2) {
                cout << "Ingrese el monto a ingresar: ";
                cin >> value;
                cuentas[id].fondo += value;
                cout << "Valor ingresado correctamente!";
            } else if (op == 3) {
                cout << "Ingrese el monto a retirar: ";
                cin >> value;
                cuentas[id].fondo -= value;
                cout << "Valor retirado correctamente!";
            } else {
                cout << "Opcion incorrecta!" << endl;
            }
        }
    }

    return 0;
}