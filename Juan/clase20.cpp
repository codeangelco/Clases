#include <iostream>
#include <string>
using namespace std;

/*
int main() {
    string nombre;
    cout << "Digite su nombre completo: ";
    
    // getline: va a agarrar toda la linea, no va a separar por espacios.
    // cin: va porque es el metodo de lectura.
    // nombre: es la variable donde se va a guardar la informacion.
    getline(cin, nombre);
    // cin >> nombre; Solo agarra hasta el primer espacio
    
    // nombre.length(): Es un metodo que nos da el tamaño del arreglo
    for (int i = 0; i < nombre.length(); i++) {
        cout << nombre[i] << endl;
    }
    cout << "La primera letra de su nombre es: " << nombre[0] << endl;
    cout << "Su nombre es: " << nombre << endl;
    return 0;
}
*/

/*
int main() {
    string frase;
    
    cout << "Ingrese una frase!" << endl;
    getline(cin, frase);
    
    int contador = 1;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ') {
            contador++;
        }
    }
    
    cout << "La cantidad de palabras es de " << contador << endl;
    return 0;
}
*/

/*
int main() {
    string frase;
    
    cout << "Ingrese la frase!" << endl;
    getline(cin, frase);
    
    // variable.erase(x, y)
    // x: Es el indice del elemento a eliminar
    // y: Es la cantidad de caracteres a eliminar
    
    // Si 'i' es la posicion actual, entonces, 'i + 1' es la siguiente posicion.
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ') {
            while (frase[i + 1] == ' ') {
                frase.erase(i + 1, 1);
            }
        }
    }
    
    cout << frase << endl;
    return 0;   
}
*/

int main() {
    string frase;
    int mayusculas = 0, minusculas = 0;
    
    cout << "Ingrese una frase!" << endl;
    getline(cin, frase);
    
    
    // Sabemos que las letras (caracteres) tienen un numero
    // entonces solo necesitamos revisar si ese numero es 
    // el numero de una minuscula o mayuscula.
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] >= 65 && frase[i] <= 90) { // 65 -> A | 90 -> Z
            mayusculas++;
        }
        if (frase[i] >= 97 && frase[i] <= 122) { // 97 -> a | 122 -> z
            minusculas++;
        }
    }
    cout << "La cantidad de letras mayusculas es de: " << mayusculas << endl;
    cout << "La cantidad de letras minusculas es de: " << minusculas << endl;

    return 0;
}









