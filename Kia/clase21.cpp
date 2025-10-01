#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;
    int matriz[y][x];

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "-------------------------" << std::endl;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            std::cout << matriz[i][j] << (j < x - 1 ? " " : "\n");
        }
    }

    // Creo dos arreglos que van a tener las sumas, fil y col nos serviran para llevar la posicion en los arreglos (inician en 0)
    int filas[] {0,0,0}, columnas[] {0,0,0}, fil = 0, col = 0;

    // {
    //     {1, 2, 3};
    //     {2, 3, 4};
    //     {3, 4, 5};
    // }

    for (auto &y : matriz) {
        for (int &x : y) {
            filas[fil] += x;
        }
        fil++;
    }

    for (auto &y : matriz) {
        for (int &x : y) {
            columnas[col] += x;
            col++;
        }
        col = 0;
    }

    std::cout << "-------------------------" << std::endl;
    for (int i : filas) {
        std::cout << i << " " << sqrt(i) << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    for (int i : columnas) {
        std::cout << i << " " << sqrt(i) << std::endl;
    }
    return 0;
}