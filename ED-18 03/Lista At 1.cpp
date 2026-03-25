#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int s, m;
	list<int> numlist;
	
	numlist.push_back(1);
	numlist.push_back(2);
	numlist.push_back(3);
	numlist.push_back(4);
	
	
	m=1;
	for(auto element: numlist){
	
	s += element;
	m *= element;

	}

	cout << s << endl;
	cout << m << endl;
	
	return 0;
}
