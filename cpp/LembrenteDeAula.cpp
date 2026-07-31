#include  <iostream>
using namespace std;

int main() {
    int contador = 0; //contador
    int x = 0; // valor
    int *vetor = nullptr; //ponteiro

    while (x >= 0) { // laço de repetição
        cin >> x; // entrada de valor
        contador++; // de 0 ate o ultimo valor

        if (vetor == nullptr) { // estrutura condicional (se acontecer faça)
            vetor = new int[contador]; // new (novo) inteiro
            vetor[contador - 1] = x; // vetor de 0 ate o ultimo-1
        } else { //(se não se acontecer faça)
            int * vetor_auxiliar = new int[contador]; // novo vetor
            for (int i = 0; i < contador - 1; i++) { //
                vetor_auxiliar[i] = vetor[i];
            }
            delete [] vetor;
            vetor = vetor_auxiliar;
            vetor[contador - 1] = x;
        }
    }

    for (int i = 0; i < contador; i++) {
        cout << vetor[i] << endl;
    }
}