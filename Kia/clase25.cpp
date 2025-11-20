#include <iostream>
#include <string>

class Libro {
    private:
        std::string nombre;
        int size;
    public:
        Libro() : nombre("Libro anonimo"), size(0) {}

        Libro(std::string nuevo_nombre) {
            nombre = nuevo_nombre;
            size = 0;
        }

        Libro(std::string nuevo_nombre, int nuevo_size) {
            nombre = nuevo_nombre;
            size = nuevo_size;
        }

        void setnombre(std::string nuevo_s) { nombre = nuevo_s; }

        std::string getnombre() { return nombre; }

        void setsize(int nuevo_s) { size = nuevo_s; }

        int getsize() { return size; }

        // void getMostrarNombre() {
        //     std::cout << nombre << std::endl;
        // }
};



int main() {
    Libro libro_1("El principito");
    // libro_1.setnombre("Libro anonimo");
    
    if (!libro_1.getnombre().compare("Libro anonimo")) {
        std::cout << "Nombre estandar" << std::endl;
    } else {
        std::cout << "Nombre: " << libro_1.getnombre() << std::endl;
    }


    

    return 0;
}