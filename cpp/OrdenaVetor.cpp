

#include <iostream>
using namespace std;
int main() {
    int Vet[4], aux;
    
    for(int i = 0; i < 4; i++){
		cout << "Digite um valor: ";
		cin >> Vet[i];
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = i + 1; j < 4; j++){
			if(Vet[i] > Vet[j]){
				aux = Vet[i];
				Vet[i] = Vet[j];
				Vet[j] = aux;
			}
		}
	}
	for(int i = 0; i < 4; i++){
		cout << "{" << Vet[i] << "}";
	}

    return 0;
}
