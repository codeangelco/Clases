#include <iostream>
using namespace std;

// ### POO -> Programacion Orientada a Obejetos.

class Estudiante {
    private:
        string nombre;
        unsigned int edad;
    
    public:
        Estudiante() {
            nombre = "Estudiante anonimo";
            edad = 0;
        }

        Estudiante(string nuevo_nombre) {
            nombre = nuevo_nombre;
            edad = 0;
        }

        Estudiante(string nuevo_nombre, unsigned int nueva_edad) : nombre(nuevo_nombre), edad(nueva_edad) {}

        ~Estudiante() {}

        string getNombre() { return nombre; }

        unsigned int getEdad() { return edad; }

        void setEdad(unsigned int nueva_edad) {
            edad = nueva_edad;
        }

        void caminar();

};

void Estudiante::caminar() {
    cout << "El estudiante " << nombre << " está caminando..." << endl;
}



int main() {
    Estudiante estudiante_1("Juanito");
    Estudiante estudiante_2("Juliana", 29);
    // cout << "Nombre: " << estudiante_1.obtenerNombre() << ", y edad: " << estudiante_1.obtenerEdad() << endl;
    // cout << "Nombre: " << estudiante_2.obtenerNombre() << ", y edad: " << estudiante_2.obtenerEdad() << endl;

    estudiante_1.caminar();
    return 0;
}