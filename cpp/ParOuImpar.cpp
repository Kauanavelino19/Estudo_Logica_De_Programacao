#include <iostream>
using namespace std;

struct ImparOuPar {
	int Numero1;
};
int main (){
	ImparOuPar a1;
	
	cout << "Digite um numero: ";
	cin >> a1.Numero1;
	 
	if(a1.Numero1 % 2 == 0){
		cout << "O numero " << a1.Numero1 << " eh PAR!" << endl;
	} else{
		cout << "O numero " << a1.Numero1 << " eh IMPAR!" << endl;
	}
	
	return 0;
}
