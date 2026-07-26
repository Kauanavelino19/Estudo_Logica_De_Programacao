#include <iostream>
using namespace std;

int main() {
    int Vet[4], aux;

    for (int cont = 0; cont < 4; cont++){
        cout << "Digite um valor: ";
        cin >> Vet[cont];
    }
    for(int cont = 0; cont < 3; cont++){
		for(int leo = cont + 1; leo < 4; leo++){
			if(Vet[cont] > Vet[leo]){
				aux = Vet[cont];
				Vet[cont] = Vet[leo];
				Vet[leo] = aux;
			}
		}
	}
	
	for(int cont = 0; cont < 4; cont++){
		cout << "{" << Vet[cont] << "}";
	}

    return 0;
}
