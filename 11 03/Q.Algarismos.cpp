#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int t, q, n;
	
	cout << "Numero:" << endl;
	cin >> n;
	
	q = 0;
	t = n;
	
	while(t > 0){
		t=t/10;
		q++;
	}
	

	cout << "O numero: " << n << " Possui: " << q << " Digitos" << endl;

	return 0;
}

