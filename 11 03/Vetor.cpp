#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int n[5], s=0;
	float m;
	
	cout << "Numeros" << endl;
		for(int i=0;i<5;i++){
			cin >> n[i];
			s+=n[i];
			}
			m=s/5;


		cout << " Soma: " << s << endl;
		cout << " Média: " << m << endl;
	
	
	return 0;
	
}

