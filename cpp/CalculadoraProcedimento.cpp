
#include <iostream>
using namespace std;
void Menu(int &opcao) {
    cout << "1 - Somar" << endl;
    cout << "2 - Subitrair" << endl;
    cout << "3 - Multiplicar" << endl;
    cout << "4 - Dividir" << endl;;
    cout << "5 - Sair" << endl;
    cout << "Escolhe uma opcao: ";
    cin >> opcao;
}
void Somar(int &a, int &b,int &soma){
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;
	
	soma = a+b;
	cout << soma << endl;
}
void Subitrair(int &a, int &b, int &menos){
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;
	
	menos = a-b;
	cout << menos << endl;
}
void Multiplicar(int &a, int &b, int &mult){
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;
	mult = a*b;
	cout << mult << endl;
}
void Dividir(int &a, int &b, int &div){
	cout << "Digita um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;
	div = a/b;
	cout << div << endl;
}
int main() {
	int opcao, soma, menos, mult, div,a,b;
    cout << "============================" << endl;
    cout << "        CALCULADORA        " << endl;
    cout << "============================" << endl;
    //int N1,N2, Soma, Menos, Multi, Div;
    
    Menu(opcao);
    
    switch(opcao){
		case 1:			
			Somar(a,b, soma);
			break;
		case 2:			
			Subitrair(a,b,menos);
			break;
		case 3:						
			Multiplicar(a,b, mult);
			break;
		case 4:
			Dividir(a, b, div);
			break;
	}
    return 0;
}
/*

#include <iostream>
using namespace std;
void Menu(int &opcao) {
	cout << "1 - Somar" << endl;
	cout << "2 - Subitrair" << endl;
	cout << "3 - Multiplicar" << endl;
	cout << "4 - Dividir" << endl;;
	cout << "5 - Sair" << endl;
	cout << "Escolhe uma opcao: ";
	cin >> opcao;
}
void Somar(int a, int b,int soma){
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;

soma = a+b;
cout << soma << endl;
}
void Subitrair(int a, int b, int menos){
	cout << "Digite um numero: ";
	cin >> a;
	cout << "Digite outro numero: ";
	cin >> b;

	menos = a-b;
	cout << menos << endl;
}
void Multiplicar(int a, int b, int multi){
	multi = a*b;
}
int main() {
	int opcao;
	cout << "============================" << endl;
	cout << "        CALCULADORA        " << endl;
	cout << "============================" << endl;
	int N1,N2, Soma, Menos, Multi, Div;

	Menu(opcao);

	switch(opcao){
		case 1:
			cout << "Digite um numero: ";
			cin >> N1;
			cout << "Digite outro numero: ";
			cin >> N2;
			//Soma = N1+N2;
			Somar(N1,N2);
			break;
		case 2:
			cout << "Digite um numero: ";
			cin >> N1;
			cout << "Digite outro numero: ";
			cin >> N2;

			Subitrair(N1,N2,Menos);
			break;
		case 3:
			cout << "Digite um numero: ";
			cin >> N1;
			cout << "Digite outro numero: ";
			cin >> N2;

			Multiplicar(N1,N2, Multi);
			break;
	}
	return 0;
}
*/
