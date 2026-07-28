
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string Nome[4]; // Esse guarda nome com 4 espaco
	float Nota1[4], Nota2[4], Media[4], MediaTurma, SomaMedia;
	int MediaTotal;
	
	cout << "CADASTRA A TURMA " << endl;
	cout << "----------------------" << endl;
	for(int cont = 0; cont < 4; cont++){
		cout << "ALUNO " << cont + 1 << endl;
		cout << "---------------------" << endl;
		
		cout << "Nome: ";
		cin.ignore();
		getline(cin, Nome[cont]);
		
		cout << "Primeira NOTA: ";
		cin >> Nota1[cont];
		
		cout << "Segunda NOTA: ";
		cin >> Nota2[cont];
		
		Media[cont] = (Nota1[cont] + Nota2[cont]) / 2;
		
		SomaMedia = SomaMedia + Media[cont]; 
	}
	
	MediaTurma = SomaMedia / 4;
	system("clear");
	
	cout << "LISTAGEM DE ALUNOS " << endl;
	cout << "------------------------" << endl;
	
	for(int cont = 0; cont < 4; cont++){
		cout << left << setw(15) << Nome[cont] << fixed << setprecision(1) << Media[cont] << endl;
		if(Media[cont] >= MediaTurma){
			MediaTotal++;
		}
	}
	cout << "Ao todos temos " << MediaTotal << " alunos acima da media da turma que eh " <<  fixed << setprecision(1) << MediaTurma << endl;
	return 0;
}
