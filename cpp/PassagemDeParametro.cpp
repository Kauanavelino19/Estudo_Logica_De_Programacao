#include <iostream>
using namespace std;
void soma(int a, int b) {
    cout << "Recebir o valor " << a << endl;
    cout << "Recebir o valor " << b << endl;
    cout << "A soma vale " << a + b << endl;
}
int main() {
    int X,Y;
    cout << "Digite o X: ";
    cin >> X;
    cout << "Digite o Y: ";
    cin >> Y;

    soma(X,Y);
    return 0;
}
