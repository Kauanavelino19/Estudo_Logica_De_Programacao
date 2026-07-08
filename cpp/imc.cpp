#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	
	double M, A, IMC;
	cout << "Massa (Kg): ";
	cin >> M;
	
	cout << "Altura (m): ";
	cin >> A;
	
	IMC = M / pow(A, 2);
	
	cout << fixed << setprecision(2) << "IMC: " << IMC << endl;
	
	if((IMC >= 18.5) and (IMC < 25)){
		cout << "Parabens! Voce esta no seu peso ideal" << endl;
	}else{
		cout << "Voce nao esta na faixa de peso ideal" << endl;
	}
	return 0;
}
