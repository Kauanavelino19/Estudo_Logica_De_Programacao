
#include <iostream>
using namespace std;

int main () {
    int V[6]    ;
    for (int i = 0; i < 6; i++) {
        cout << "Digite o " << i + 1 << "o. valor: ";
        cin >> V[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << "{" << V[i] << "}";
    }
    return 0;
}
