#include <iostream>
#include <list>

using namespace std;

int main() {
	
    list<string> list;

    list.push_back("1");
	list.push_back("2");
	list.push_back("3");
	list.push_back("4");
	list.push_back("5");
	
	list.reverse();
	
    cout << "\nOrdem invertida:\n";
    
    for (auto element: list) {
        cout << element << " ";
    }

    return 0;
}
