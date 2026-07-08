#include <iostream>

using namespace std;

struct Aluno{
	float Nota1, Nota2, Media;
};
int main(){
	Aluno a1;
	
	cout << "Primeira Nota: ";
	cin >> a1.Nota1;
	
	cout << "Segunda Nota: ";
	cin >> a1.Nota2;
	
	a1.Media = (a1.Nota1 + a1.Nota2) / 2;
	
	if(a1.Media >= 7){
		cout << "A media do aluno foi " << a1.Media << " e esta APROVADO!" << endl;
	} else if((a1.Media >= 5) and (a1.Media < 7)){
		cout << "A media do aluno foi " << a1.Media << " e esta de RECUPERACAO!" << endl;
	} else{
		cout << "A media do aluno foi " << a1.Media << " e esta REPROVADO!" << endl;
	}
}
