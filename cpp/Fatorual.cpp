#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	int N,C, F;
	char Resp;
	do{
		cout << "Digite um numero que deseja fazer fatorial ";
		cin >> N;
		C = N;
		F = 1;
		do{
			cout << C << " x ";
			F = F * C;
			C--;
		}while(C > 1);
		cout << "Fatorial de " << N << " Fatorial de " << F << endl;
		cout << "Quer continuar ? [S/N]" << endl;
		cin >> Resp;
		system("clear");
	}while(Resp != 'N' and Resp != 'n');
	return 0;
}
