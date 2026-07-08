#include <iostream>
#include <string>
using namespace std;

void Menus(int &opcao) {
	cout << "[1] - Adicionar um gasto" << endl;
	cout << "[2] - Mostra os gasto cadastrados" << endl;
	cout << "[3] - Mostra o total gasto" << endl;
	cout << "[4] - Encerrar o programa" << endl;
	cout << "Escolhe uma opcao: ";
	cin >> opcao;
}
void EscolhaCaso(int &opcao) {
	Menus(opcao);
	switch (opcao) {
		case 1:
			cout << "Adicionando gasto..." << endl;
			break;
		case 2:
			cout << "Mostrando gasto..." << endl;
			break;
		case 3:
			cout << "Mostrando total gasto..." << endl;
			break;
		case 4:
			cout << "Encerrando o programa..." << endl;
			cout << "Volte sempre ;)" << endl;
			break;
		default:
			cout << "Opcao invalida" << endl;

	}
}
void Usuario(string &Nome,float &Salario) {
	 Nome;
	string NomeGasto;
	float ValorGasto;
	 Salario;
	cout << "Nome: ";
	cin >> Nome;

	cout << "Salario: ";
	cin >> Salario;

}


int main (){

	string Nome,NomeGasto;
	float Salario,ValorGasto;
	int opcao;

	cout << "=====================" << endl;
	cout << " CONTROLE DE GASTO " << endl;
	cout << "=====================" << endl;
	Usuario(Nome,Salario);

	do {
		EscolhaCaso(opcao);

	}while(opcao!=4);


	return 0;
}
