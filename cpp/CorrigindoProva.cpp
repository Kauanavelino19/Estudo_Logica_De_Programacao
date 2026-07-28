

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string NomeAluno[3];
	char QuestG[5], QuestR[5];
	int Ponto, Nota[3], Soma = 0;
	float Media;
	cout << "PASSO 1 - Cadastro de Gabarito" << endl;
	cout << "------------------------------------" << endl;
	
	for(int j = 0; j < 5; j++){
		cout << "Quastao " << j + 1 << ": ";
		cin >> QuestG[j];
	}
	
	system("clear");
	
	for(int i = 0; i < 3; i++){
		cout << "----------------------------------" << endl;
		cout << "ALUNO " << i + 1 << endl;
		cout << "----------------------------------" << endl;
		
		cout << "Nome: ";
		cin.ignore();
		getline(cin, NomeAluno[i]);
		
		cout << "RESPOSTAS DADAS" << endl;
		Ponto = 0;
		
		for(int j = 0; j < 5; j++) {
			cout << "Questao " << j + 1<< ": ";
			cin >> QuestR[j];
			
			
			if(QuestG[j] == QuestR[j]){
				Ponto = (Ponto + 2);
			}
		}
		
		Nota[i] = Ponto;
	}
	
	system("clear");
		
	cout << " NOTAS FINAIS " << endl;
	cout << "-------------------------" << endl;
	
	
	for(int i = 0; i < 3; i++){
		Soma = Soma + Nota[i];
	}
	
	Media = (float)Soma / 3;
	
	for(int i = 0; i < 3; i++){
		cout << left << setw(15) << NomeAluno[i] << Nota[i]  << endl;
	}
	cout  << "-------------------------" << endl;
	cout << "Media da Turma: " << fixed << setprecision(2) << Media << endl;
	return 0;	
}
