#include <iostream>

using namespace std;
void regressiva(int i){
	cout << i << endl;
	if(i==0){
		return;
	} else {
		regressiva(i-1);
	}
}

int main(){
	for(int i=0; i<5; i++){
		cout << "Recurssão" << endl;
	}
	return 0;
}
