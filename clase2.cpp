#include <iostream>
using namespace std;

int main() {
    // Operadores matematicos

    // + - * /
    int a = 10;
    int b = 30;
    // b = b + a;
    // b += a;
    // b *= a;
    // b /= a;
    // b -= a;
    // b = b - 1;
    // b -= 1;
    // b = b + 1;
    // b += 1;
    // b--;
    b++;
    a--;

    // Signos Comparativos
    // < > == != <= >=

    /* if (a >= 9) {
        cout << "SI" << endl;  
    } else {
        cout << "NO" << endl;
    } */


    /* int;
    float;
    double;
    char;
    bool;
    string; */

    // cout << b << " " << a << endl;

    // y -> &&
    // o -> ||
    /* if (a == 9 || b == 30) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    } */

    /* 
    
        &&
    1 0  0
    0 1  0
    1 1  1
    0 0  0

        ||
    1 0  1
    0 1  1
    0 0  0
    1 1  1
    */

    /* int n1, n2, n3;

    cout << "Digite el valor de n1, n2 y n3: ";
    cin >> n1 >> n3 >> n2;
    cout << "El valor de n1: " << n1 << "\nEl valor de n2 es: " << n2 << "\nEl valor de n3 es: " << n3 << endl; */



    // Haga un codigo, donde el usuario digite el valor de dos lados de un rectangulo, y calcule el area;
    // Tener en cuenta, que el valor de los lados puede ser con decimales.
    // Y revisar si el area es superior a las 25 unidades, y avisarle al usuario que el area es muy grande.

    double lado1, lado2;

    cout << "Ingrese el valor del lado 1 y lado 2 respectivamente: " << endl;
    cout << "Lado 1: ";
    cin >> lado1;
    cout << "Lado 2: ";
    cin >> lado2;

    double area = lado1 * lado2;
    cout << "El area del rectangulo es igual a: " << area << endl;

    if (area > 25) {
        cout << "El area del rectangulo es mayor a 25, cuidado, es muy grande!" << endl;
    }












    /* int numero = 10;

    if (numero > 50) {
        cout << "no pasen, es peligroso" << endl;
    } else {...} */

    // Calcuar la masa total de los 2 niños, y si es mayor a los 50 kilos que soporta el puente, avisarles que no pasen.














    // El usuario va a ingresar los numeros de 6 caras de un dado. Imprima la probabilidad que tiene cada numero del
    // dado de que salga.


    /* 
    
    
    
    */














    return 0;
}