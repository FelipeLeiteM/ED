#include <iostream>
#include <list>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	list<float> numlist = {10.1, 20.2, 30.3};
	
	numlist.remove(10.1);
	
	for(auto j: numlist){
		
		cout << j << " - ";
	}

	cout << endl;

	return 0;
}
