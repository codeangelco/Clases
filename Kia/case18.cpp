#include <iostream>
#include <math.h>

int main() {
    /*
    ITERADOR:
        Un iterador, es un puntero que nos ayuda a recorrer estructuras de datos. Mayormente utilizado para recorrer listas enlazadas, pero que mientras tengamos la opcion de ver la direccion de memoria de nuestra estructura y cada uno de los datos, nos ayudara a recorrerla.

    Si sabemos que un iterador es un puntero, como se define un puntero?:
        Se define colocando el tipo de variable, seguido de un asterisco (*) y el nombre del puntero.
        Ejemplo: int* puntero;
    
    Que guardan los punteros?:
        Guardan direcciones de memoria.
        Ejemplos: int* puntero = &una_variable;
                  puntero = &una_variable;
                  int* puntero = otro_puntero;
                  puntero = otro_puntero;
                  int* puntero = (cualquier variable y/o objeto que nos de una direccion de memoria);
                  puntero = (cualquier variable y/o objeto que nos de una direccion de memoria);
    
    (Solo para arreglos) Si ya tenemos guardada la direccion de memoria, como recorremos nuestro arreglo?:
        Solo necesitamos hacer: puntero + (espacios de memoria a recorrer) -> esto nos da el siguiente dato en la memoria contigua.
    
    Entonces si nuestro arreglo es: arr[] = {1, 2, 3}; que hace el 'puntero + (espacios de memoria a recorrer)'?:
        Por ejemplo, si hicimos: puntero = arr; ya estaremos apuntando al primer espacio de memoria del arreglo, siendo equivalente a &arr[0], si hacemos: puntero + 1 -> seria equivalente a &arr[1]; y así susesivamente.

    Por qué es equivalente a &arr[n]?:
        Porque si tenemos un puntero: puntero = (Una direccion de memoria); nada cambia que le sumemos uno o vario espacios, nos dara la direccion de memoria de esos espacios.

    Y que pasa si quiero obtener o modificar los valores en esos espacios:
        Hay que desreferenciar la direccion de memoria resultante, ejemplo, si puntero es igual a &arr[0], entones para obtener arr[0] es *puntero. Pero cuidado! Si tenemos una suma para avanzar a un espacio de memoria, hay que desreferenciar el resultado de la operacion, así: *(puntero + n), aplica tambien para -, *, /.
    */

    // pedirle al usuario que ingrese dos lados de un triangulo, y decirle al usuario cual es el valor de la hipotenusa. 

    // double v1, v2, v3;
    // std::cin >> v1 >> v2;
    // v3 = sqrt((v1 * v1) + (v2 * v2));
    // std::cout << v3 << std::endl;


    // Pedir al usuario que ingrese un numero, y decirle si su numero es par o impar.

    int a;
    std::cout << "Ingresa numero" << std::endl;
    std::cin >> a;
    if (a % 2 == 0) {
        std::cout << "Es par" << std::endl;
    } else {
        std::cout << "Es impar" << std::endl;
    }

    return 0;
}