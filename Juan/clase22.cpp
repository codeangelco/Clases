#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// Libreria necesaria para el manejo de cadenas
#include <string>

/*
int main() {
    string texto = "SI-";
    texto.append("CASA");

    cout << texto << endl;

    // texto.clear();

    cout << texto << endl;

    // a.compare(b)
    // Compara a con b
    // Si a es igual que b devuelve 0
    // Si a es menor que b devuelve -1
    // Si a es mayor que b devuelve 1
    cout << texto.compare("Si-casa") << endl;

    // texto.empty() nos dice si está vacío el texto o no
    // Verdadero (1) si está vacío
    // Falso (0) si no está vacío
    cout << texto.empty() << endl;

    // texto.clear();

    cout << texto.empty() << endl;

    cout << texto.length() << endl;

    // si-casa -> si-casaX
    texto.push_back('X');
    cout << texto << endl;

    texto.pop_back();
    texto.pop_back();
    texto.pop_back();
    cout << texto << endl;
// font
    cout << texto.front() << endl;
    cout << texto.back() << endl;

    // s i - c a
//     0 1 2 3 4
    cout << texto[2] << endl;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] >= 65) 
            texto[i] += 32;
        cout << texto[i] << endl;
    }

    return 0;
}
*/

int main() {
    string texto;

    cout << "Ingrese un texto!" << endl;
    std::getline(cin, texto);

    if (texto.front() >= 97 && texto.front() <= 122) {
        texto[0] -= 32;
    }

    for (int i = 1; i < texto.length(); i++) {
        if (texto[i - 1] == ' ' && (texto[i] >= 97 && texto[i] <= 122)) {
            texto[i] -= 32;
        }
    }

    cout << "Texto con todas las primeras letras en mayuscula!" << endl;
    cout << texto << endl;

    return 0;
}