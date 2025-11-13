#include <iostream>
#include <string>
using namespace std;

// Invertir una cadena de caracteres
/*
int main() {
    string texto;

    cout << "Ingrese un texto!" << endl;
    getline(cin, texto);

    // Escogemos el ultimo elemento de nuestro texto original y lo
    // ingresamos al final del nuevo texto.

//     0 1 2 3
    // h o l a      <- Texto oringial
    // a l o h      <- Nuevo texto
    string texto_invertido;
    for (int i = texto.length() - 1; i >= 0; i--) {
        texto_invertido.push_back(texto[i]);
        // El metodo push_back(x) ingresa a x como el ultimo elemento.
    }

    cout << "Texto original: " << texto << endl;
    cout << "Texto invertido: " << texto_invertido << endl;

    return 0;
}
*/

/*
int main() {
    // Ejemplo de push_back en cadenas de caracteres
    string texto = "Hola";
    texto.push_back(' ');
    cout << texto << endl; // Imprime "Hola "
    texto.push_back('M');
    cout << texto << endl; // Imprime "Hola M"
    texto.push_back('u');
    cout << texto << endl; // Imprime "Hola Mu"
    texto.push_back('n');
    cout << texto << endl; // Imprime "Hola Mun"
    texto.push_back('d');
    cout << texto << endl; // Imprime "Hola Mund"
    texto.push_back('o');
    cout << texto << endl; // Imprime "Hola Mundo"

    return 0;
}
*/

#include <iostream>
using namespace std;

struct DatosAuto{
    string marca;
    string modelo;
    int year;
    double kilometraje;
    double valor;

};

DatosAuto informacion[] = {
    {"SUZUKI", "DZIRE", 2023, 63'429.0, 9'590'000.0},
    {"KIA", "SOLUTO", 2023, 21'467.0, 9'790'000.0},
    {"CHEVLORET", "PRISMA LTZ", 2020, 34'000.0, 8'690'000.0}
};

int main(){
    int opcion, id;
    string marca;
    cout << "\tBienvenido a la empresa Autos de Chile!" << endl;
    cout << "Ingrese la opcion que desee!" << endl;
    cout << "0. Salir" << endl;
    cout << "1. Ver informacion vehicular" << endl;
    cin >> opcion;
    if (opcion==0){
        cout << "Que vuelvas pronto!";
        // break; ERROR
        return 0;
    }
    if (opcion==1){
        cout << "Tenemos las marcas: Suzuki, Kia, Chevloret" << endl;
        cout << "\nPor favor elija una marca: " << endl;
        cin >> marca;
        for (int i = 0; i < 3; i++) {
            if (informacion[i].marca == marca) {
                id = i;
                break;
            }
        }
        cout << "Marca: " << informacion[id].marca << endl;
        cout << "Modelo: " << informacion[id].modelo << endl;
        cout << "Year: " << informacion[id].year << endl;
        cout << "Kilometraje: " << informacion[id].kilometraje << endl;
        cout << "Valor: " << informacion[id].valor << endl;
    }
    return 0;
}