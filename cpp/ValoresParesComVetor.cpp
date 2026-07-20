#include <iostream>
using namespace std;
int main() {
    int Val[7], TotPare = 0;
    for (int i = 0; i < 7; i++) {
        cout << "Digite o " << i + 1 << "o. valor: ";
        cin >> Val[i];
    }

    for (int i = 0; i < 7; i++) {
        if (Val[i] % 2 == 0) {
            TotPare++;
            cout << "Valor PAR na posicao " << i + 1 << endl;
        }
    }
    cout << "O total de valores pares sao " << TotPare << endl;
    return 0;
}
