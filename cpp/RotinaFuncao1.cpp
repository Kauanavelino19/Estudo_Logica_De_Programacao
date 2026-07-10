//
// Created by kauan on 08/07/2026.
//

#include <iostream>
using namespace std;
int soma(int A, int B) {
    return A + B;
}


int main() {
    int x,y;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite outro numero: ";
    cin >> y;

    cout << soma(x,y) << endl;
    return 0;
}
