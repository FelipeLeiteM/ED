#include <iostream>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	list<float> numlist;
	
	numlist.push_back(10.15);
	numlist.push_back(20);
	numlist.push_back(30.3);
	
	for(auto element: numlist){
		
		cout << element << " - ";
	}

	cout << endl;

	return 0;
}

