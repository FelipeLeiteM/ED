#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	list<string> numlist = {"1", "2", "3", "4", "5"};
	
	
	for(int i=4; i>=0; i--){
	for(auto element: numlist){

cout << numlist[i];

	}

	return 0;
}
}
