#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string Nome,SoC[10];
    int Tot = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite seu nome: ";
        getline(cin, Nome);
        
        if(Nome.substr(0,1) == "K"){
        	SoC[Tot] = Nome;
        	Tot++;
		}
    }
    
    system("clear");
    
    cout << "LISTAGEM FINAIS" << endl;
    cout << "-----------------------" << endl;
    
    for(int i = 0; i < Tot; i++){
		cout << SoC[i] << endl;
	}
    return 0;
}
