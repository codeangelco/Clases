#include <iostream>

void asiganar_10_b(int b) {
	b = 10;
}

void asiganar_10_c(int& c) {
	c = 10;
}

void imprimir(int& dato) {
	std::cout << dato << std::endl;
}

int main() {
    // un arreglo
    // funcion para llenar un arreglo con la entrada del usuario
    // funcion para que los numeros impares de un arreglo pasen a 0
    // funcion para que muestre el arreglo

	// int a = 5;
	// std::cout << a << std::endl;
	// asiganar_10_b(a);
	// std::cout << a << std::endl;
	// asiganar_10_c(a);
	// std::cout << a << std::endl;

	// int arr[] = {1,2,3,4,5};

	// for (int num : arr) {
	// 	std::cin >> num;
	// }

	// for (int num : arr) {
	// 	std::cout << num << std::endl;
	// }

	// for (int& num : arr) {
	// 	std::cin >> num;
	// }

	// for (int num : arr) {
	// 	std::cout << num << std::endl;
	// }


	// void imprimir(int& dato) {
	// 		std::cout << dato << std::endl;
	// }

	// int arr[] = {1, 2, 3, 4, 5};
	// for (int& num : arr) {
	// 	imprimir(num);
	// }


	int a = 10; 
	int* b = &a;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	// Un puntero, es una variable que apunta a una direccion de memoria.
    return 0;
}

/* 
	-----------------------------------
	|     *1                          |  234
	|                                 |
	|                                 |				234 + 423 = 657
	|                                 |
	|                                 |
	|                    *2           |  423
	|                                 |
	|                                 |
	|      *(657)                     |
	|_________________________________|

	int a; <- *1
	fun(a) - void fun(int b){} -> b -> *2
	fun2(a) - void fun(int& c){} -> c -> *1

 */
