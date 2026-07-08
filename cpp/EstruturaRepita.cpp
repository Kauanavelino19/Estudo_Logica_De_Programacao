#include <iostream>
using namespace std;

int main(){
	int Cont, Numero, calculo;
	
	Cont = 1;
	cout << "Quer ver a tabuada de qual numero? ";
	cin >> Numero;
	do{
		calculo = Numero * Cont;
		cout << Numero <<  " * " << Cont << " = " << calculo << endl;
		Cont++;
	}while(Cont <=10);
	return 0;
}
