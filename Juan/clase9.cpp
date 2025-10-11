#include <iostream>

int main() {
    int arreglo_1d[3] = {1, 2, 3};

    int arreglo_2d[3][3] = {
        {1, 5, 5},
        {0, 3, 7},
        {7, 0, -1}
    };

    int otro_arreglo_2d[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5}
    };

    int arreglo_3d[2][2][2] = {
        {
            {1, 2},
            {2, 3}
        },
        {
            {4, 3},
            {3, 2}
        }
    };


    // for (int x= 0; x < 3; x++) {
    //     std::cout << arreglo_1d[x] << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "------------------" << std::endl;

    // for (int y = 0; y < 3; y++) {
    //     for (int x = 0; x < 3; x++) {
    //         std::cout << arreglo_2d[y][x] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // std::cout << "------------------" << std::endl;
    
    // for (int y = 0; y < 5; y++) {
    //     for (int x = 0; x < 5; x++) {
    //         std::cout << otro_arreglo_2d[y][x] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // std::cout << "------------------" << std::endl;

    // for (int z = 0; z < 2; z++) {
    //     for (int y = 0; y < 2; y++) {
    //         for (int x = 0; x < 2; x++) {
    //             std::cout << arreglo_3d[z][y][x] << " ";
    //         }
    //         std::cout << std::endl;
    //     }
    //     std::cout << std::endl;
    // }

    int matriz[5][6];

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 6; x++) {
            std::cin >> matriz[y][x];
        }
    }

    std::cout << "------------------" << std::endl;

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 6; x++) {
            std::cout << matriz[y][x] << " ";
        }
        std::cout << std::endl;
    }


    
    return 0;
}