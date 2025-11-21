#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

// int main() {
//     string texto1, texto2;
//     std::getline(cin, texto1);
//     std::getline(cin, texto2);

//     texto1.clear();
//     // El erase(x, y)
//     // x = Es la posición desde la cual se empieza a borrar
//     // y = Es la cantidad de posiciones que se borran, si no se coloca nada se borra todo desde la x
//     texto2.erase(2, 1);
//     texto2.clear();

//     cout << texto1 << endl;
//     cout << texto2 << endl;

//     return 0;
// }

int main() {
    string texto, palabra;
    int contador = 0;
    bool flag;

    cout << "Ingrese el texto!" << endl;
    std::getline(cin, texto);

    cout << "Ingrese la palabra: ";
    cin >> palabra;

                // s o p a   h o p a
//                 0 1 2 3 4 5 6 7 8
// h o l a
// 0 1 2 3
    for (int i = 0; i < texto.length(); i++) {
        flag = true;
        if (texto[i] == palabra[0]) {
            for (int j = 0; j < palabra.length(); j++) {
                if (texto[i + j] != palabra[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                contador++;
            }
        }
    }

    cout << "Repeticiones: " << contador << endl;

    return 0;
}