#include <iostream>
#include <list>

using namespace std;

void leu(int &v){
	cout << "Digite um número:";
	cin >> v;
}
int main() {
	
	int n;
	leu(n);
	
	cout << "Você digitou:" << n << 
	
	endl;
    return 0;
}
