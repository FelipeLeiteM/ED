#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int n[6], ma, me;
	
	cout << "Numeros" << endl;
		for(int i=0;i<6;i++){
			cin >> n[i];
			}
			ma=n[1];
			me=n[1];
			for(int i=0;i<6;i++){
				if(n[i]>ma){
					ma=n[i];
				}
				if(n[i]<me){
					me=n[i];
				}
			}

		cout << " Maior: " << ma << endl;
		cout << " Menor: " << me << endl;
	
	
	return 0;
	
}

