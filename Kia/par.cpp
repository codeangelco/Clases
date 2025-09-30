#include <iostream>
using namespace std;

bool es_par(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cin >> n;
    bool bandera = es_par(n);
    if (bandera) {
        cout << "Es par" << endl;
    } else {
        cout << "No es par" << endl;
    }
    return 0;
}