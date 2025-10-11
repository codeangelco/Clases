#include <iostream>
#include <vector>

struct Libro {
    std::string nombre;
    int fecha_de_salida;
};

struct Libreria {
    Libro *libros;
    int cantidad;
};

Libro crearLibro() {
    Libro nuevo_libro;

    std::cout << "Ingrese el nombre del libro: ";
    getline(std::cin, nuevo_libro.nombre);

    std::cout << "Ingrese la fecha de salida: ";
    std::cin >> nuevo_libro.fecha_de_salida;

    getchar();
    return nuevo_libro;
}

enum Dificultad {
    FACIl = 25,
    NORMAL = 30,
    DIFICIL
};

int main() {

    Stack stack1;
    stack1.empty();
    
    int dificultad;
    dificultad = DIFICIL;
    std::cout << dificultad << std::endl;









    // Libreria libreria;
    // std::cout << "Ingresa la cantidad de libros que va a tener la libreria: ";
    // std::cin >> libreria.cantidad;
    // getchar();
    // libreria.libros = new Libro[libreria.cantidad];

    // for (int i = 0; i < libreria.cantidad; i++) {
    //     libreria.libros[i] = crearLibro();
    // }

    // for (int i = 0; i < libreria.cantidad; i++) {
    //     std::cout << "Libro #" << i + 1 << ": " << libreria.libros[i].nombre << ", Fecha de salida: " << libreria.libros[i].fecha_de_salida << std::endl;
    // }
    

    return 0;
}