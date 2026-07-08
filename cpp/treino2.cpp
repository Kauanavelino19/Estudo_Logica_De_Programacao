#include <iostream>
using namespace std;

int main() {
    int opcao;
    do {
        cout << "=========================" << endl;
        cout << " [1] | Contar de 1 ate 10  | " << endl;
        cout << " [2] | Contar de 10 ate 1  | " << endl;
        cout << " [3] | SAIR                |" << endl;
        cout << "=========================" << endl;
        cout << "Escolhe: " << endl;
        cin >> opcao;
        switch (opcao) {
            case 1:
                for (int i = 1; i <=10; i++) {
                    cout << i << "..." << endl;
                }
                break;
            case 2:
                for(int i = 10; i >=1; i--) {
                    cout << i << "..." << endl;
                }
                break;
            case 3:
                cout << "SAINDO..." << endl;
            default:
                cout << "Volte sempre!" << endl;
        }
    }while (opcao != 3);
    return 0;
}
