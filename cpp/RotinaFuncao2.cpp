#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}
int main () {
    int A, B, Res;
    cout << "Digite um numero: ";
    cin >> A;
    cout << "Digite outro numero: ";
    cin >> B;
    Res = soma(A,B);
    cout << "A soma é " << Res << endl;
    return 0;
}