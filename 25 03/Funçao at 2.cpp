#include <iostream>

using namespace std;

bool Par(int numero){
	return numero % 2 == 0;
}

int main(){
	int numero = 7;
	
	if (Par(numero)){
		cout << numero << "é numero par" << endl;
	} else {
		cout << numero << "não é um número par" << endl;
	}
	
	return 0;
}
