#include <iostream>

// int main() {
//     int *puntero = nullptr;
//     int a = 10;
//     puntero = &a;

//     int *puntero_2 = new int(15);

//     // std::cout << puntero << std::endl;
//     // std::cout << puntero_2 << std::endl;
//     // std::cout << "------------------------" << std::endl;
//     // std::cout << *puntero << std::endl;
//     // std::cout << *puntero_2 << std::endl;


//     char *puntero_3 = new char('z');
//     // std::cout << *puntero_3 << std::endl;


//     int *arreglo = new int[5];

//     int t = 5;
//     while (t--) {
//         std::cin >> *arreglo;
//         arreglo++;
//     }

//     arreglo -= 5;
//     t = 5;
//     while (t--) {
//         std::cout << *arreglo << (t > 0 ? " " : "\n");
//         arreglo++;
//     }
//     arreglo -= 5;


//     int *arreglo_2 = new int[6];

//     int *temp = arreglo;
    
//     t = 5;
//     while (t--) {
//         *arreglo_2 = *temp;
//         arreglo_2++;
//         temp++;
//     }
//     *arreglo_2 = -123;
//     arreglo = arreglo_2 - 5;

//     t = 6;
//     while (t--) {
//         std::cout << *arreglo << (t > 0 ? " " : "\n");
//         arreglo++;
//     }
//     arreglo -= 6;

//     delete puntero_2;
//     delete puntero_3;




//     return 0;
// }





// Clase Libro -> nombre, tamaño, precio.
//      metodos -> set/get => precio, nombre, tamaño;




class Libro {
    public:
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

        void setnombre(std::string nuevo_s) {
            nombre = nuevo_s;
        }

};



int main() {
    Libro libro_3("El principito", 20), libro_2("Sol de luna"), libro_1;

    std::cout << "Libro 1 - Nombre: " << libro_1.nombre << ", Size: " << libro_1.size << std::endl;
    std::cout << "Libro 2 - Nombre: " << libro_2.nombre << ", Size: " << libro_2.size << std::endl;
    std::cout << "Libro 3 - Nombre: " << libro_3.nombre << ", Size: " << libro_3.size << std::endl;

    std::string nuevo_nombre;
    getline(std::cin, nuevo_nombre);
    libro_3.setnombre(nuevo_nombre);
    std::cout << "Libro 3 - Nombre: " << libro_3.nombre << ", Size: " << libro_3.size << std::endl;

    return 0;
}