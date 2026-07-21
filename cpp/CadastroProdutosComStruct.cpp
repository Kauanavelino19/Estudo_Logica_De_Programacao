#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;
struct Produto{
    string nome;
    double preco;

};
int main(){
    Produto produtos[5];
    cout << "-------------------------" << endl;
    cout << " CADASTRANDO PRODUTOS " << endl;
    cout << "-------------------------" << endl;
    for(int i = 0; i < 5; i++){
        cout << "===================" << endl;
        cout << "PRODUTOS " << i + 1 << endl;
        cout << "===================" << endl;

        cout << "Nome: ";
        getline(cin, produtos[i].nome);

        cout << "Preco: R$";
        cin >> produtos[i].preco;
        cin.ignore();
    }
    system("cls");

    cout << "-------------------------" << endl;
    cout << " LISTANDO PRODUTOS " << endl;
    cout << "-------------------------" << endl;

    for(int i = 0; i < 5; i++){
        cout << "===================" << endl;
        cout << "PRODUTOS " << i + 1<< endl;
        cout << "===================" << endl;
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preco: R$" << fixed << setprecision(2) << produtos[i].preco << endl; 
    }
    return 0;
} 
