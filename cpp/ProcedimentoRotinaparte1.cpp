// Rotina preparo curso em video algoritmo, *Procedimento*

#include <iostream>
#include <string>
using namespace std;
void perguntar() {
    string Nome;
    int idade;
    char Sexo; //M(Masculino) /  F(Feminino)

    cout << "Digite seu nome: ";
    cin >> Nome;

    cout << "Digite sua Idade: ";
    cin >> idade;

    cout << "Homen (M) ou Mulher (F)";
    cin >> Sexo;

    cout << "Sejam bem vindo!" << endl;
    cout << Nome << " " << "idade " << idade << " " << Sexo <<endl;
}
int main() {
    perguntar();
    return 0;
}
