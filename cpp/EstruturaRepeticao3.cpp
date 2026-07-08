#include <iostream>
using namespace std;

int main(){
	int CInicio, CFinal;
	cout << "Contagem inteligencia" << endl;
	cout << "=======================" << endl;

	cout << "Inicio: ";
	cin >> CInicio;

	cout << "Final: ";
	cin >> CFinal;

	if (CInicio <= CFinal) {
		for (int i = CInicio ; i <= CFinal; i ++){
			cout << i << "...";
		}
	} else{''
		for(int i = CInicio; i >= CFinal; i--){
			cout << i << "...";
		}
	}
	return 0;
}
