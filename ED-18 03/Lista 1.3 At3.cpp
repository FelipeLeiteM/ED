#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	

	list<int> numlist;
	
	numlist.push_back(1);
	numlist.push_back(2);
	numlist.push_back(3);
	numlist.push_back(4);
	numlist.push_back(5);
	
		list<int> numlist1;
	
	numlist1.push_back(1);
	numlist1.push_back(2);
	numlist1.push_back(3);
	numlist1.push_back(4);
	numlist1.push_back(5);
	

	for(auto element: numlist){
	
	list<int> numlist2 =element;
	
	cout << element;
	}

	
	
	return 0;
}
