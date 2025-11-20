#include <iostream> // <- libreria standar de C++
// using namespace std; // <- Evitar escribir std:: en funciones standar

int main() {
    // Bucles: Estructuras de flujo, que repite un bucle mientras sea verdadera una condicion.
    
    // for (int i = 1; i <= n; i++) {
    //     std::cout << i*3 << std::endl;
    // }
    // i = 1 -> i * 3 = 3; i++
    // i = 2 -> i * 3 = 6; i++
    // i = 3 -> i * 3 = 9; i++
    
    int n;
    std::cin >> n;
    
    
    for (int i = 1; i <= n; i++) {
        std::cout << i * 3 << std::endl;
    }
    
    
    
    
    // while (condicion) {
    //     instrucciones
    //     .
    //     .
    //     .
    // }
    
    // do {
    //     instrucciones
    //     .
    //     .
    //     .
    // } while (condicion);
    
    // for (defincion de varible; condicion; actualizacion) {
    //     instrucciones
    //     .
    //     .
    //     .
    // }
    
    return 0;
}