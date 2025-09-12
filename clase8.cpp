#include <iostream>

int main() {
    std::cout << std::endl;
    int arr1[5]; // arreglo 1D
    int arr2[5][5]; // arreglo 2D
    int arr3[5][5][5]; // arreglo 3D
    int arr4[5][5][5][5]; // arreglo 4D

    int arr1D[] = {1, 2, 3, 4, 5};

    int arr2D[][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    int arr3D[][5][5] = {
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        },
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        },
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        },
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        },
        {
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5}
        }
    };

    // for (int i = 0; i < 5; i++) {
    //     std::cout << arr1D[i];
    //     if (i < 4)
    //         std::cout << " ";
    // }
    // std::cout << std::endl;
    // std::cout << std::endl;

    // for (int y = 0; y < 5; y++) {
    //     for (int x = 0; x < 5; x++) {
    //         std::cout << arr2D[y][x];
    //         if (x < 4)
    //             std::cout << " ";
    //     }
    //     std::cout << std::endl;
    // }

    /* 
    Primer for -> y
        Segundo for -> x

            y = 0;
                x = 0;
                x = 1;
                x = 2;
                x = 3;
                x = 4;
            y = 1;
                x = 0;
                x = 1;
                x = 2;
                x = 3;
                x = 4;
            y = 2;
                x = 0;
                x = 1;
                x = 2;
                x = 3;
                x = 4;
            y = 3;
                x = 0;
                x = 1;
                x = 2;
                x = 3;
                x = 4;
            y = 4;
                x = 0;
                x = 1;
                x = 2;
                x = 3;
                x = 4;

    */

    // int matriz[5][5];

    // for (int y = 0; y < 5; y++) {
    //     for (int x = 0; x < 5; x++) {
    //         std::cin >> matriz[y][x];
    //     }
    // }

    // std::cout << "------------------------------------------------" << std::endl;

    // for (int y = 0; y < 5; y++) {
    //     for (int x = 0; x < 5; x++) {
    //         std::cout << matriz[y][x];
    //         if (x < 4)
    //             std::cout << "\t";
    //     }
    //     std::cout << std::endl;
    // }


    // for (int i = 0; i < 5; i++) {

    // }

    // char i = 'c';
    // std::cout << i << std::endl;
    

    int matriz[3][3][3];

    for (int z = 0; z < 3; z++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
               std::cin >> matriz[z][y][x];
            }
        }
    }

    std::cout << "------------------------------------------------" << std::endl;

    for (int z = 0; z < 3; z++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                std::cout << matriz[z][y][x];
                if (x < 2)
                    std::cout << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }











    return 0;
}