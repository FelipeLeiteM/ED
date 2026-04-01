#include <iostream>
#include <locale>

using namespace std;

bool Par(int numero){
	return numero % 2 == 0;
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite o número";
	cin >> numero;
	
	if (Par(numero)){
		cout << numero << " é numero par" << endl;
	} else {
		cout << numero << "não é um número par" << endl;
	}
	
	return 0;
}
