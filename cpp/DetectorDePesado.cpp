#include <iostream>
#include <string>
using namespace std;

void DetectorPesado(float MaiorPeso) {
    //float MaiorPeso = 0;
    system("clear");
    cout << "---------------------------------------------" << endl;
    cout << "D E T E C T O R  DE  P E S A D O " << endl;
    cout << "Maior Peso ate agora: " << MaiorPeso << "Kg" << endl;
    cout << "---------------------------------------------" << endl;
}
int main() {

    float MaiorPeso = 0 ;
    float Peso = 0;
    string nome, nomeMaisPeso;
    DetectorPesado(MaiorPeso);

    for (int i = 1; i <= 5; i++) {
        cout << "Digite o nome: ";
        cin >> nome;

        cout << "Digite o peso do " << nome << ": ";
        cin >> Peso;
        if (Peso > MaiorPeso) {
            MaiorPeso = Peso;
            nomeMaisPeso = nome;
        }
        DetectorPesado(MaiorPeso);
    }
    DetectorPesado(MaiorPeso);
    cout << "A pessoa mais pesado foi " << nomeMaisPeso << " com " << MaiorPeso << " kg" << endl;
    return 0;
}