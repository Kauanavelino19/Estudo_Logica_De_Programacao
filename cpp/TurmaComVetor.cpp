#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {
    string Nome[4];
    float Nota1[4], Nota2[4], Media[4];
    float SM = 0, MT;
    int TotM = 0;

    for (int i = 0; i < 4; i++) {
        cout << "ALUNO " << i+1 << endl;

        cout << "Nome: ";
        cin >> Nome[i];

        cout << "Primeira Nota: ";
        cin >> Nota1[i];

        cout << "Segunda Nota: ";
        cin >> Nota2[i];

        Media[i] = (Nota1[i] + Nota2[i]) / 2;
        SM+=Media[i];
    }
    MT = SM /4;
    system("clear");

    cout << " LISTAGEM DE ALUNOS " << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << left << setw(15) <<  Nome[i]  << fixed << setprecision(1) << Media[i] << endl;
        if (Media[i] > MT) {
            TotM++;
        }
    }
    cout << "Ao todos temos " << TotM << " alunos acima da media da turma que e " << setprecision(1) << MT << endl;

    return 0;
}
