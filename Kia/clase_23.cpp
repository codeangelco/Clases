#include <iostream>
using namespace std;
/*
void rellenarMatriz(int *incio, int *final) {
    for (int *it = incio; it <= final; it++) {
        std::cin >> *it;
    }
}

void mostrarMatriz(int *incio, int *final) {
    for (int *it = incio; it <= final; it++) {
        std::cout << *it << (it < final ? " " : "\n");
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;

    int matriz[n][m];
    rellenarMatriz(&matriz[0][0], &matriz[n-1][m-1]);
    mostrarMatriz(&matriz[0][0], &matriz[n-1][m-1]);

    return 0;
}
*/


class CuentaDeBanco {
    private:
        string propietario;
        string numero_de_identidad;
        string numero_de_cuenta;
        string password;
        double dinero;
    public:
        CuentaDeBanco() {
            propietario = "Sin asignar";
            numero_de_identidad = "000000000";
            numero_de_cuenta = "XXXXXXXXXX";
            password = "Sin asignar";
            dinero = 0.0;
        }

        bool setPropietario() {
            cout << "Ingrese su nombre: ";
            getline(cin, propietario);
        
            if (propietario.length() < 9 || propietario.length() > 30) {
                cout << "ERROR: Su nombre no es de un tamaño logico." << endl;
                return true;
            }

            for (char &letra : propietario) {
                if (letra >= 49 && letra <= 57) {
                    cout << "ERROR: Su nombre no puede contener caracteres numericos." << endl;
                    return true;
                }
            }

            cout << "Nombre ingresado exitosamente!" << endl;
            return false;
        }

        string getPropietario() const { return propietario; }

        bool setPassword() {
            cout << "Ingrese su contraseña: " << endl;
            cin >> password;

            if (password.length() < 8) {
                cout << "ERROR: Su contraseña debe de ser de 8 caracteres minimo." << endl;
                return 1;
            }

            cout << "Contraseña ingresada exitosamente!" << endl;
            return 0;
        }
};



int main() {

    CuentaDeBanco cuenta_1;
    int intento;

    // cout << cuenta_1.getPropietario() << endl;

    intento = 3;
    while (cuenta_1.setPropietario()) {
        intento--;
        if (!intento) {
            cout << "Numero de intentos alcanzado, cuenta creada sin exito." << endl;
            return 1;
        }
        cout << "Le queda " << intento << " intento/s, vuelva a intentar." << endl;
    }

    intento = 3;
    while (cuenta_1.setPassword()) {
        intento--;
        if (!intento) {
            cout << "Numero de intentos alcanzado, cuenta creada sin exito." << endl;
            return 1;
        }
        cout << "Le queda " << intento << " intento/s, vuelva a intentar." << endl;
    }

    cout << "Cuenta creada exitosamente!" << endl;

    return 0;
}