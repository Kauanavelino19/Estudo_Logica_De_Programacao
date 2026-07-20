//
// Created by kauan on 13/07/2026.
//
#include <iostream>
#include <string>
using namespace std;

void Menu(int &opcao) { // para mostra clientes,
    cout << "1- Cadastra Cliente" << endl;
    cout << "2- Lista Clientes" << endl;
    cout << "3- Sair" << endl;
    cout << "Escolhe uma opcao: ";
    cin >> opcao;
}
void cadastraClientes(string &Nome) {
    cout << "Digite o nome: " ;
    cin >> Nome;
}
void ListaClientes(string Nome) {
    cout << "Cliente: " << Nome << endl;
    //cadastraClientes(nome) = Nome;
    //cout << Nome << endl;
}
int main() {
    string Nome;
    int Opcao;
    do {
        Menu(Opcao);
        switch (Opcao) {
            case 1:
                cadastraClientes(Nome);
                break;
            case 2:
                ListaClientes(Nome);
                break;
            case 3:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }

    }while (Opcao != 3);
    return 0;
}
