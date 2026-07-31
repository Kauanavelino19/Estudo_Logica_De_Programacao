

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int mID[3][3];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j){
				mID[i][j] = 1;
			}else{
				mID[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << setw(3) << mID[i][j];
		}
		cout << endl;
	}
	return 0;
}
