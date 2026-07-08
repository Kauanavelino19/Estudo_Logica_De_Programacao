#include <iostream>
using namespace std;

int main (){
	int CInicio, CFinal;
	
	cout << "CONTAGEM INTELIGENTE" << endl;
	cout << "------------------------" << endl;
	
	cout << "Inicio: ";
	cin >> CInicio;
	
	cout << "Final: ";
	cin >> CFinal;
	
	if(CInicio <= CFinal){
		while(CInicio <= CFinal){
			cout << CInicio << ".. ";
			CInicio++; 
		}
	} else{
		while(CInicio >= CFinal){
			cout << CInicio << ".. ";
			CInicio--;
		}
	}
	return 0;
}
