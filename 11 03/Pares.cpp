#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int n, p;
	
	cout << "Numero:" << endl;
	cin >> n;
	
		for(int i=n;i>0;i--){
			if(i % 2 == 0){
				p++;
			}
		}
	
	cout << "Pares:" << p << endl;
	
	return 0;
}

