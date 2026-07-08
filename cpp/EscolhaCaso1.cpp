#include <iostream>
using namespace std;

int main(){
	int D;
	float valor;
	
	cout << "--------------------------" << endl;
	cout << "	CRIANCA ESPERANCA	" << endl;
	cout << "--------------------------" << endl;
	cout << "Muito obrigado por ajudar" << endl;
	
	cout << "[1] para doar R$10 " << endl;
	cout << "[2] para doar R$25 " << endl;
	cout << "[3] para doar R$50 " << endl;
	cout << "[4] para doar outro valores " << endl;
	cout << "[5] para cancelar " << endl;
	cin >> D;
	switch (D){
		case 1:
			valor = 10;
			break;
		case 2:
			valor = 25;
			break;
		case 3: 
			valor = 50;
			break;
		case 4:
			cout << "Qual o valor da doacao R$";
			cin >> valor;
			break;
		default:
			valor = 0;
	}
	
	cout << "--------------------------" << endl;
	cout << "SUA DOACAO FOI DE R$" << valor << endl;
	cout << " MUITO OBRIGADO! " << endl;
	cout << "--------------------------" << endl;
}
