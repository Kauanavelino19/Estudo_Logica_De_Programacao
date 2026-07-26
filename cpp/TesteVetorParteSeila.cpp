

#include <iostream>
using namespace std;

int main(){
	
	int vet[7], TotPar = 0;
	
	for(int i = 1; i <= 7; i++){
		cout << "Digite o " << i + 1<< "o. valor: ";
		cin >> vet[i];
	}
	
	for(int i = 1; i <= 7; i++){
		if(vet[i] % 2 == 0){
			cout << "Valor PAR na posicao " << i << endl;
			TotPar++;
		}
	}
	cout << endl;
	cout << "O total de numero pares é " << TotPar << endl; 
	return 0;
}
