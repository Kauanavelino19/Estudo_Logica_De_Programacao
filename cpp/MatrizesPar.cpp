

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Valores[3][3]	, TotPar = 0;
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
			cout << "Digite o valor na posicao [" << l + 1 << " , " << c + 1 << "]";
			cin >> Valores[l][c];
        }
    }
    
    cout << endl;
    cout << "   M A T R I Z E S   " << endl;
    cout << "-------------------------" << endl;
    for(int l = 0; l < 3; l++){
		for(int c = 0; c < 3; c++){
			if(Valores[l][c] % 2 == 0){
				TotPar++;
				cout << "{ " << setw(2) << Valores[l][c] << " }";
				
			}else {
				
				cout << setw(3) << " [ " << Valores[l][c] << " ]"; 
			}
		}
		cout << endl;
	}
	
	cout << "Ao todos e o total de PAR na matriz eh " << TotPar << endl;
    return 0;
}
