// #include <iostream>
// #include <math.h>

// int main() {
//     double a, b, c;
//     std::cin >> a >> b >> c;
//     double calculo = a - b;
//     calculo = calculo / c;
//     if (round(calculo) == calculo) {
//         std::cout << "S" << std::endl;
//     } else {
//         std::cout << "N" << std::endl;
//     }

//     return 0;
// }


// int main() {
//     char arr[10]; // {'T', X, X, 'A', 'P', . . .}
//     for (int i = 0; i < 10; i++) {
//         std::cin >> arr[i];
//     }
//     char arr2[3] = {' ', ' ', ' '};
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] == 'T') {
//             arr2[0] = 'T';
//         }
//         if (arr2[0] == 'T' && arr[i] == 'A') {
//             arr2[1] = 'A';
//         }
//         if (arr2[0] == 'T' && arr2[1] == 'A' && arr[i] == 'P') {
//             arr2[2] = 'P';
//             std::cout << "S" << std::endl;
//             return 0;
//         }
//     }
//     std::cout << "N" << std::endl;

//     return 0;
// }

#include <iostream>
#include<math.h>
#include <string>
using namespace std;
int main()
{
    char arreglo2[3] = {' ', ' ', ' '};
    for(int i=0;i<10;i++)
    {
        char temp;
        cin>>temp;
        if(temp=='T')
        {
            arreglo2[0]=temp;          
        }
        if(arreglo2[0]=='T'&& temp=='A')
        {
            arreglo2[1]=temp;
        }
        if(arreglo2[0]=='T'&& arreglo2[1]=='A'&& temp=='P')
        {
            cout<<"S"<<endl;
            return 0;
        }
        
    }
    cout<<"N"<<endl;

    return 0;
}