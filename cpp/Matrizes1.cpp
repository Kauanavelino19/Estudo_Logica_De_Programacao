#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int Matrizes[3][2];
    //Lendo variaveis
    for(int l = 0; l < 3; l++){
		for (int c = 0; c < 2; c++){
			cout << "Digite o valor na posicao [" << l + 1 << " , " << c + 1 << "] : ";
			cin >> Matrizes[l][c];
		}
	}
	system("clear");
	//Mostrando na tela
	for(int l = 0; l < 3; l++){
		for(int c = 0; c < 2; c++){
			cout  << setw(5) << "[ " << Matrizes[l][c] << " ]";
		}
		cout << endl;
	}
    return 0;
}
