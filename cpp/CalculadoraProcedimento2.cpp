//
// Created by kauan on 06/07/2026.
//

#include <iostream>
using namespace std;
void Menu(int &Opcao){
    cout << "1 - Somar " << endl;
    cout << "2 - Subtrair " << endl;
    cout << "3 - Multiplicar " << endl;
    cout << "4 - DIvidir " << endl;
    cout << "5 - Sair " << endl;
    cout << "Escolhe uma opcao: ";
    cin >> Opcao;
}
void LerNumeros(int &a, int &b) {
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digita o segundo numero: ";
    cin >> b;
}
void Soma(int a, int b) {
    cout << "A soma eh " << a+b << endl;
}
void Subitrair(int a, int b) {
    cout << "A subtracao eh " << a-b << endl;
}
void Multiplcar(int a, int b) {
    cout << "A multiplicacao eh " << a*b << endl;
}
void Dividir(int a, int b) {
    cout << "A divisao eh " << a/b << endl;
}

int main() {
    int a, b, Opcao;

    do {
        Menu(Opcao);
        switch(Opcao) {
            case 1:
               LerNumeros(a,b);
                Soma(a,b);
                break;
            case 2:
               LerNumeros(a,b);
                Subitrair(a,b);
                break;
            case 3:
                LerNumeros(a,b);
                Multiplcar(a,b);
                break;
            case 4:
                LerNumeros(a,b);
                Dividir(a,b);
                break;
            case 5:
                cout << "Saindo..." << endl;
                cout << "Volte sempre ;)" << endl;
            default:
                cout << "Opcao invalida" << endl;
        }
    }while (Opcao != 5);


    return 0;
}
