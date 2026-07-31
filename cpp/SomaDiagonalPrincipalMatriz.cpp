
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int Mat[4][4], sDP = 0, p2L = 1, Mai3c;
		
	//Lendo (vetores e Matrizes)	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "Digite o valor da Posicao [" << i + 1 << " , " << j + 1 << "]: ";
			cin >> Mat[i][j];
			
			if(i == j){
				sDP+=Mat[i][j];
			}
		}
	}
	
	//Exibindo na tela
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cout << "[" << setw(3) << Mat[i][j] << "]";
		}
		cout << endl;
	}
	
	//exibindo a multiplicacap da segunda linha 
	for(int j = 0; j < 4; j++){
		p2L *= Mat[1][j];
	}
	
	//Exibindo o maior numero da terceira coluna
	for(int i = 0; i < 4; i++){
		if(Mat[i][2] > Mai3c) {
			Mai3c = Mat[i][2];
		}
	}
	
	cout << "A soma de todos valores da Diagonal Principal e " << sDP << endl;
	cout << "O Produto dos valores da segunda linha eh " << p2L << endl; 
	cout << "O maior valor da terceira coluna eh " << Mai3c << endl;
	return 0;
}
