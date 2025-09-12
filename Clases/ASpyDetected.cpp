#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int temp, arr[] = {0, 0};

        for (int i = 0; i < n; i++) {
            cin >> temp;            // Primer elemento -> primer espacio de arr[]
            if (i == 0) {
                arr[0] = temp;
                continue; 
            }
            if (temp != arr[0]) {    // 1 2 2 2 2 2;
                arr[1]++;
            } else if (arr[1] > 0){
                cout << i << endl;
                break;
            }
        }
        cout << "1" << endl;
        
    }
    

    return 0;
}