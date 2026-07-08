//Resolvido o resercicio

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int V,soma = 0, Pares = 0,NumDiv = 0, NumNulo = 0;
	float media = 0;
	for (int i = 1; i <=5; i++) {
		cout << "Digite o "<< i << "o. valor: ";
		cin >> V;
		cout << endl;
		soma = soma + V;
		media = float(soma) / 5;
		if (V%2==0) {
			Pares= Pares+V;
		}
		if (V % 5 == 0) {
			NumDiv++;
		}
		if (V == 0) {
			NumNulo++;
		}
	}
	cout << "A soma entres os valores: " << soma << endl;
	cout << "A media entre os valores: " << fixed << setprecision(2) <<  media << endl;
	cout << "Valores divisiveis por cinco: " << NumDiv << endl;
	cout << "Valores nulos: " << NumNulo << endl;
	cout << "Valores Pares: " << Pares << endl;
	return 0;
}
