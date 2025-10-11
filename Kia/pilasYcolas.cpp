#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int sacarymostrar(stack<int> &pila) {
    int n = pila.top();
    pila.pop();
    return n;
}

int main() {
    stack<int> pila;
    cout << pila.empty() << endl;
    cout << pila.size() << endl;
    pila.push(10);
    cout << pila.empty() << endl;
    cout << pila.size() << endl;
    pila.push(20);
    cout << pila.empty() << endl;
    cout << pila.size() << endl;
    // cout << pila.top() << endl;
    // pila.pop();
    // cout << pila.top() << endl;
    cout << sacarymostrar(pila) << endl;
    cout << sacarymostrar(pila) << endl;

    cout << pila.emplace(-123) << endl;
    cout << pila.top() << endl;

    cout << "========== SEPARADOR DE LUJO ==========" << endl;
    cout << "========================================" << endl;

    stack<int> temp;
    pila.swap(temp);
    cout << pila.size() << endl;
    cout << temp.size() << endl;
    cout << temp.top() << endl;

    return 0;
}









// void saludar() {
//     cout << "Hola... 👋" << endl;
// }

// int sacarymostrar(queue<int> &cola) {
//     int n = cola.front();
//     cola.pop();
//     // saludar();
//     return n;
// }

// int main() {
//     queue<int> cola;

//     cout << cola.empty() << endl;
//     // cola.push(26);
//     // cout << sacarymostrar(cola) << endl;
//     // cola.pop();
//     cola.push(10);
//     cola.push(2);
//     cola.push(-1);
//     cout << cola.back() << endl;
//     cout << cola.front() << endl;

//     cout << cola.size() << endl;
//     cout << cola.emplace(20) << endl;
//     cout << cola.size() << endl;
//     cout << cola.front() << endl;
//     cout << cola.back() << endl;

//     cout << "----- SEPARADOR -----" << endl;
//     queue<int> temp;
//     cola.swap(temp);
//     cout << cola.size() << endl;
//     cout << temp.size() << endl;
//     cout << temp.front() << endl;
//     cout << temp.back() << endl;
    
//     return 0;
// }