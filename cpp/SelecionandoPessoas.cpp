#include <iostream>
#include <cstdlib>
using namespace std;

void MostrandoMenus(int &TotM, int &TotF) {
	int Idade, CorCabelo;
	char Sexo,Resp;
	do{
		cout << "===========================" << endl;
		cout << " SELETOR DE PESSOAS " << endl;
		cout << "===========================" << endl;

		cout << "Qual o Sexo? [M/F]";
		cin >> Sexo;

		cout << "Qual idade? ";
		cin >> Idade;

		cout << "Qual cor do cabelo?" << endl;
		cout << "------------------------" << endl;
		cout << "[1] Preto" << endl;
		cout << "[2] Castanho" << endl;
		cout << "[3] Loiro" << endl;
		cout << "[4] Ruivo" << endl;
		cout << "Escolhe uma opcao ";
		cin >> CorCabelo;
		switch(CorCabelo){
			case 1:
				cout << "Preto..." << endl;
				break;
			case 2:

				cout << "Castanho..." << endl;
				break;
			case 3:
				cout << "Loiro..." << endl;
				break;
			case 4:
				cout << "Ruivo..." << endl;
				break;
			default:
				cout << "opcao invalida..." << endl;
		}
		cout << "Quer continuar? [S/N]";
		cin >> Resp;
		system("clear");

		if((Sexo == 'M') and (CorCabelo == 2) and (Idade >= 18)){
			TotM++;
		}else if((Sexo == 'F') and (CorCabelo == 3) and (Idade >= 25) and (Idade <= 30)){
			TotF++;
		}else{
			cout << "Não tem comparação " << endl;
		}
	}while(Resp != 'N' and Resp != 'n');
}
int main() {

    int TotM, TotF;

	TotM = 0;
	TotF = 0;

	MostrandoMenus(TotM, TotF);


	cout << "Total de Homens com mais de 18 anos e cabelos castanhos " << TotM<< endl;
	cout << "Total de Mulheres entre 25 e 30 e cabelos loiros " << TotF << endl;
    return 0;
}
