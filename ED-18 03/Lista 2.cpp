#include <iostream>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	list<float> numlist;
	
	numlist.push_back(1);
	numlist.push_back(2);
	numlist.push_back(3);
	numlist.push_front(0);
	
	cout << "Lista: ";
	
	for(auto element: numlist){
		
		cout << element << " - ";
	}

	cout << endl;
	
	numlist.pop_back();
	numlist.pop_front();

	cout << "Lista após remoção do primeiro e ultimo elementos:";
	
	for(auto element: numlist){
		cout << element << " - ";
	}

	return 0;
}

