

#include <iostream>
using namespace std;
int main(){
	int Fil[10], Cadeira;
	char ReservO;
	
	for(int i = 0; i	< 10;i++){
		Fil[i] = 0;
	}
	do {
		for(int i = 0; i < 10; i++){
			if (Fil[i] == 1) {
				cout << "[ --- ]";
			}else{
				cout << "[ B " << i+1 << " ]";
			}
		}
		cout << endl;
		cout << "-----------------------------------------------------------------------------" << endl;
		
		cout << "Reserva a cadeira B: ";
		cin >> Cadeira;
		
		Cadeira--;
		if(Fil[Cadeira] == 1){
			cout << "Cadeira B " << Cadeira + 1 << "JA ESTA RESERVADA!" << endl;
		} else{
			Fil[Cadeira] = 1;
			cout << "Cadeira B " <<  Cadeira + 1 << " RESERVADA COM SUCESSO! " << endl;
		}
		cout << "Quer Reserva outro? [S/N]";
		cin >> ReservO;
		system("clear");
	}while (ReservO != 'N' and ReservO != 'n');
	return 0;
}
