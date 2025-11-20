#include <iostream>
using namespace std;

class Libro {
    // Atributos
    private:
        string nombre;
        float precio;
        string autor;
    // Metodos
    public:
        // CONSTRUCTORES:

        // Constructor por defecto (sin datos)
        Libro() {
            nombre = "Desconocido";
            precio = 0.0;
            autor = "Anonimo";
        }

        // Constructor con parametros (con datos)
        Libro(string nuevo_nombre, float nuevo_precio, string nuevo_autor) : 
            nombre(nuevo_nombre), precio(nuevo_precio), autor(nuevo_autor) {}

        // Getters
        string getNombre() { return nombre; }
        float getPrecio() { return precio; }
        string getAutor() { return autor; }

        // Setters
        void setNombre(string nuevo_nombre) { nombre = nuevo_nombre; }
        void setPrecio(float nuevo_precio) { precio = nuevo_precio; }
        void setAutor(string nuevo_autor) { autor = nuevo_autor; }

        // Metodos
        void mostrarInformacion() {
            cout << "Nombre: " << nombre << endl;
            cout << "Precio: " << precio << endl;
            cout << "Autor: " << autor << endl;
        }

/*      Este metodo aplica un descuento sobre el precio actual del libro.

        porcentaje:
        Se recibe en %, si se quiere un 50% se envia un valor de 50. */
        void aplicarDescuento(float porcentaje) {
            float descuento = precio * (porcentaje / 100);
            precio -= descuento;
        }
};

int main() {
    Libro libro_1, libro_2 = Libro("El principito", 15.99, "Juan Gabriel R.R.");

    cout << "Informacion del constructor sin datos:" << endl;
    libro_1.mostrarInformacion();
    cout << "\nInformacion del constructor con datos:" << endl;
    libro_2.mostrarInformacion();

    libro_1.setNombre("El Lirbo Troll");
    cout << "\nEl nuevo nombre del libro 1 es: " << libro_1.getNombre() << endl;

    libro_1.setAutor("EL Rubius OMG");
    cout << "\nEl nuevo autor del libro 1 es: " << libro_1.getAutor() << endl;

    cout << "\nLa nueva informacion del libro 1 es:" << endl;
    libro_1.mostrarInformacion();

    cout << "\nEl valor del libro 2 es de: " << libro_2.getPrecio() << endl;
    cout << "Aplicando descuento..." << endl;
    libro_2.aplicarDescuento(50);
    cout << "El nuevo valor del libro 2 con descuento es de: " << libro_2.getPrecio() << endl;

    return 0;
}

/* 
int; <- 2³¹ - 1;
int numero = 2147483647;

long long; <- 2^63 -1;
long long numero_grande = 9223372036854775807;

float; <- 7 digitos de precision;
float numero_decimal = 3.1415926;

double; <- 15 digitos de precision;
double numero_decimal_grande = 3.141592653589793;

char; <- 1 byte;
char caracter = 'A';

bool; <- true o false;
bool booleano = true;

string; <- cadena de caracteres;
string cadena = "Hola Mundo";
*/