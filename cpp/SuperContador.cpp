#include <iostream>
using namespace std;

int main(){
	int opcao, C;
	do{
		cout << "=======================" << endl;
		cout << "|       M E N U       |" << endl;
		cout << "=======================" << endl;
		cout << "| [1] De 1 a 10   |" << endl;
		cout << "| [2] De 10 a 1   |" << endl;
		cout << "| [3] Sair        |" << endl;
		cout << "=======================" << endl;
		cout << "Escolha uma opcao: ";
		cin >> opcao;
		
		switch(opcao){
			case 1:
				C = 1;
				do{
					cout << C << ".. ";
					C++;
				}while(C <= 10);
				cout << endl;
			break;
			case 2:
				C = 10;
				do{
					cout << C << "..";
					C--;
				}while(C >= 1);
				cout << endl;
			break;
			
			case 3:
				cout << "SAINDO..." << endl;
			break;
			
			default:
			cout << "Opcao invalida " << endl;
		}
	}while(opcao != 3);
	return 0;
}
