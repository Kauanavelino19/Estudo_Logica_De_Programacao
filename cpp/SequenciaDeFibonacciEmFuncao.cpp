#include <iostream>
using namespace std;

int SequenciaDeFibonacci(int &A, int &B) { // A e B esta sendo referencia
    int FT;
    FT = A+B; // FT recebe A+B

    A = B; // A Recebe B
    B = FT; // B recebe FT
    return  FT  ; // Escreva FT
}
int main() {        
    int F1, F2; // variavel F1 e F2
    F1 = 0; // F1 Recebe 0
    F2 = 1; // F2 recebe 1
    cout << F1 << " ";
    cout << F2 << " ";
    for (int i = 3; i <= 10; i++) { // Laço de reperticao com para i igual 3 menor que 10 faça
        cout <<  SequenciaDeFibonacci(F1, F2) << " "; // paramentro

    }
    return 0;
}
