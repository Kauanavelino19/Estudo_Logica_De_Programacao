#include <iostream>
#include <string>
using namespace std;
int main() {
    string NomeTime[3];
    for (int i = 0; i < 3; i++) {
        cout << "Nome do " << i << "o. TIME: ";
        cin >> NomeTime[i];
    }

    system("clear");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(NomeTime[i] != NomeTime[j]) {
               cout << NomeTime[i] << " [ ] x [ ]" << NomeTime[j] << endl;
            }
        }
    }

    return 0;
}