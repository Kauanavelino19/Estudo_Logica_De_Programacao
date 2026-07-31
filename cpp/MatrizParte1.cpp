
#include <iostream>
using namespace std;
int main() {
    int Mat[3][2];

    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 2; k++) {
            cout << "Digite o valor na posicao [ " << i + 1 << "," << k + 1  << " ]: ";
            cin >> Mat[i][k];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 2; k++) {
            cout << Mat[i][k];
        }
    cout << endl;
    }


    return 0;
}