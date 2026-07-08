//
// Created by kauan on 04/07/2026.
//
 
#include <iostream>
using namespace std;
void  Soma(int &A, int &B) {
    A = A+1;
    B = B+2;
    cout << "Valor de A = " << A << endl;
    cout << "Valor de B = " << B << endl;
    cout << "Soma A+B = " << A+B << endl;
}
int main() {
    int X,Y;
    cout << "Digite X: ";
    cin >> X;
    cout << "Digite Y: ";
    cin >> Y;
    Soma(X, Y);
    cout << "Valor de X = " << X << endl;
    cout << "Valor de Y = " << Y << endl;

    return 0;
}
/*
#include <iostream>
using namespace std;

void Aumentar(int &A) {
    A = A + 1;
    cout << "A = " << A << endl;
}

int main() {
    int X = 10;

    Aumentar(X);

    cout << "X = " << X << endl;

    return 0;
}*/