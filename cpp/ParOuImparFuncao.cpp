#include <iostream>
using namespace std;
int ParOuImpar(int N) {
    return N%2==0;
}
int main() {
    int Numero;
    cout <<"Digite um numero: ";
    cin >> Numero;

    if (ParOuImpar(Numero)) {
        cout << "PAR" << endl;
    }else {
        cout << "IMPAR" << endl;
    }


    return 0;
}