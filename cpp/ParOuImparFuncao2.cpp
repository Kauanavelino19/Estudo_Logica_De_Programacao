#include <iostream>
#include <string>
using namespace std;
string ParOuImpar(int N) {
    if (N%2==0) {
        return  "PAR";
    } else {
        return "IMPAR";
    }
}
int main() {
    int Numero;
    string R;
    cout <<"Digite um numero: ";
    cin >> Numero;
    R = ParOuImpar(Numero);
    cout << "O numero " << Numero << " eh um valor " << R << endl;


    return 0;
}