#include <iostream>
using namespace std;

int main() {        
    int F1, F2, FT;; // variavel F1 e F2
    F1 = 0; // F1 Recebe 0
    F2 = 1; // F2 recebe 1
    cout << F1 << " ";
    cout << F2 << " ";
    for (int i = 3; i <= 10; i++) { // Laço de reperticao com para i igual 3 menor que 10 faça
        FT = F1+F2; // FT recebe A+B
        cout << FT << " "; // Escreva FT
        F1 = F2; // A Recebe B
        F2 = FT; // B recebe FT
    }
    return 0;
}
