
#include <iostream>
using namespace std;

static void ParOuImpar(int a, int b, int soma) {
    cout << "Recebir o valor " << a << endl;
    cout << "Recebir o valor " << b << endl;
    soma = a + b;

    cout << "A soma dos valores eh " << soma << endl;
    if (soma % 2 == 0) {
        cout << soma << " eh par!" << endl;
    }else {
        cout << soma << " eh impar!" << endl;
    }
}
int main() {
    int X, Y;
    cout << "Digite o X: ";
    cin >> X;
    cout << "Digite o Y: ";
    cin >> Y;

    ParOuImpar(X,Y,0);
    return 0;
}