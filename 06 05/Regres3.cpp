#include <iostream>

using namespace std;
void regressiva(int i){
	cout << i << endl;
	if(i==0){
		return;
	} else {
		cout << "Re" << endl;
		regressiva(i-1);
	}
}

int main(){
	regressiva(5);
	return 0;
}
