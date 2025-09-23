#include <iostream>
using namespace std;

int main() {
    // int;
    // string;
    // float; <-
    // char;
    // double;
    // bool; <-
    
    // int // Guarda datos numericos. (2^31) - 1 = 2147000000
    // float, double // Numeros de punto flotante -> Numeros con decimales = 3.1415, 9.8...
    // float // Va a ser un dato, que gaurda cierta cantidad de decimales.
    // double // El double en su contraparte, gaurda una mayor cantidad de decimales.
    
    // char // Guarda caracteres -> 'c', ' ', '1', '\n', Solo puede contener un caracter.
    // string // Guarda una cadena de caracteres -> "Hola mundo!", "Juan", "varios caracteres". -> "i" <- string
    
    // bool // Guarda solo verdadero o falso. 0 -> falso, 1 -> verdadero.
    
    // bool flag = true;
    // bool flag_2 = false;
    // int flag_3 = 1;
    // int flag_4 = 0;
    
    int edad_usario;
    cout << "Ingrese su edad: ";
    
    cin >> edad_usario;
    
    if (edad_usario >= 18 && edad_usario <= 45) {    // Estructura que revisa una condicion, segun su veredicto, cumple unas u otras instrucciones.
        cout << "Puede pasar" << endl;
    } else {
        cout << "No puede pasar" << endl;
    }
    
    
    if (condicion) {
        si es verdadero, estas son las instrucciones:
        .
        .
        .
    } else {
        si es falso, aca estan las instrucciones:
        .
        .
        .
    }
    
    if (condicion)
        unica_instruccion;
    else
        unica_instruccion;
    
    // y -> &
    // o -> |
    
    // &&
    // 1 0 = 0;
    // 0 1 = 0;
    // 1 1 = 1;
    // 0 0 = 0;
    
    // ||
    // 1 0 = 1;
    // 0 1 = 1;
    // 1 1 = 1;
    // 0 0 = 0;
    
    
    // Estamos en un parque de niños, y le queremos preguntar a la persona (niño) que va a entrar su edad.
    // Solo pueden entrar niños mayores de 6 y menores de 12.
    // Si puede entrar le avisamos al usuario, y si no puede le pedimos disculpas, y le decimos que no.
    
    
    
    
    
    
    
    
    
    return 0;
}