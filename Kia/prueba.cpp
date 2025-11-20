#include <iostream>
using namespace std;
class prueba
{
private:
    int a;
public:
    prueba();
    ~prueba();
    void correr();
    void correr2();
    void mostrar();
    void mostrar2();
};

// Este metodo se encarga de mostrar el valor de dato contenido por la clase, no hay necesidad de imprimir, el metodo imprime por si mismo
void prueba::mostrar() { 
    cout << this->a << endl;
}

void prueba::mostrar2() {
    cout << a << endl;
}

void prueba::correr() {
    a = 10;
}

void prueba::correr2() {
    this->a = 15;
}

prueba::prueba()
{
    a = 0;
}

prueba::~prueba()
{
}


int main() {

    prueba sopa;
    sopa.correr2();
    sopa.mostrar();
    sopa.correr();
    sopa.mostrar2();
    return 0;
}