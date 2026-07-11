//
// Created by kauan on 10/07/2026.
//

#include <iostream>
using namespace std;
int fatorial(int N) {
    int Result;
    Result = 1;
    for (int i = 1; i <= N; i++) {
        Result *=i;
    }
    return Result;
}
int main() {
    int Numero, Fatorial;
    cout << "Digite um numero para calcular fatorial: ";
    cin >> Numero;
    Fatorial = fatorial(Numero);
    cout << "o valor de " << Numero << " = " << Fatorial << endl;
    return 0;
}
