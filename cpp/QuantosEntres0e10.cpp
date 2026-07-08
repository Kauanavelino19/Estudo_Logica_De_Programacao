#include <iostream>
using namespace std;

int main() {
    int N, Tot010 = 0,SImp = 0;
    for (int i = 0; i <6; i++) {
        cout << "Digite o "<< i <<"o. numero: ";
        cin >> N;
        if (N>=0) {
            Tot010++;
            if (N%2 == 1) {
                SImp +=N;
            }
        }
    }
    cout << "aos todos o valores digitado entre 0 e 10 foram " << Tot010 << " digitado" << endl;
    cout << "A soma dos impares foram " << SImp << " digitados" << endl;
    return 0;
}