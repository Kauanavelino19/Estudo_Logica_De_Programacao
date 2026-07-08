#include <iostream>

using namespace std;

int main(){
	int QtdeDeNumero, cont, numero, Escolha;
	cont = 1;

	cout << "------------------------" << endl;
	cout << " CALCULO DO C++ SURDO FODA HEHEHE" << endl;
	cout << "------------------------" << endl;
	cout << "Ate qual numero quer calcular? ";
	cin >> QtdeDeNumero;
	
	cout << "Qual nuemro quer calcular? ";
	cin >> numero;
	
	cout << "[1] Adicao `+´ " << endl;
	cout << "[2] Subtração `-´ " << endl;
	cout << "[3] multiplicação `*´ " << endl;
	cout << "[4] divisão `/´ " << endl;
	cout << "[5] Sair" << endl;
	cin >> Escolha;

	while (cont <= QtdeDeNumero){
		switch (Escolha){
			case 1:
				cout << numero << " + " << cont << " = " << numero + cont << endl;
				break;
			
			case 2:
				cout << numero << " - " << cont << " = " << numero - cont << endl;
				break;
			
			case 3:
				cout << numero << " * " << cont << " = " << numero * cont << endl;
				break;
			
			case 4:
				if(numero != 0){
				cout << numero << " / " << cont << " = " << numero / cont << endl;
				}else{
					cout << "Não e possivel dividir por zero!" << endl;
				}
				break;
			
			case 5:
				cout << "Saindo... " << endl;
				return 0;
			
			default:
				cout << "Opção invalida " << endl;
		}
	
		cont++;
	}
	cout << "------------------------" << endl;
	cout << "FIM CALCULO" << endl;
}
