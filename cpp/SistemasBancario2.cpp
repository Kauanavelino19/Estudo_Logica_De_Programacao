#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void  Menu(int &opcao) {
	cout << "[1] - Consulta saldo " << endl;
	cout << "[2] - Depositar "<< endl;
	cout << "[3] - Sacar " << endl;
	cout << "[4] - Sair " << endl;
	cout << "Escolha uma opção: " << endl;
	cin >> opcao;
}
void  usuario(string &Nome, string &CPF, int &saldo) {
	cout << "Nome: ";
	cin >> Nome;
	cout << "CPF: ";
	cin >> CPF;
}
int Depositar(int Depositando) {
	cout << "Qual e o valor do deposito? R$";
	cin >> Depositando;
	cout << "Depositando valor... R$" << Depositando << endl;
	usuario(saldo);
	Depositando = saldo + Depositando;
}
int main(){
	ifstream arquivo("Sistemasbancario.txt");
	cout << "============================" << endl;
	cout << "    SISTEMAS BANCARIO  " << endl;
	cout << "============================" << endl;
	
	//CRIANDO VARIAVEL
	string Nome, CPF;
	int saldo, opcao, Depositando , Sacar;// Depositar, Sacar;
	
	//COMANDO DE ENTRADA E SAIDA DE DADOS
	usuario(Nome, CPF);
	
	cout << "Quantod saldo tem na conta? R$";
	cin >> saldo;
	
	do{
		Menu(opcao);
		switch (opcao){
			case 1:
				if (saldo == saldo) {

				}

				cout << "Saldo R$ " << saldo << endl;
				saldo = Depositando;
				break;
			case 2:
				Depositar(Depositando);
				break;
			case 3:
				cout << "Qual é o valor quer Sacar? R$ ";
				cin >> Sacar;
				Sacar = saldo - Sacar;
				cout << "Sacando valor... R$" << Sacar<< endl;
				break;
			case 4:
				cout << "Saindo..." << endl;
				break;
			default:
				cout <<"Procure outros operadoes que possue uma nota de R$50, R$20, R$10, R$ 5, R$2" << endl;
		}
		
	}while(opcao != 4);
	
	
}
