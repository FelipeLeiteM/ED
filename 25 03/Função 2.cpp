#include <iostream>
#include <list>

using namespace std;

void dpr(int &n){
	n*= 2;
}
int main() {
	
	int v = 5;
	dpr(v);
	
	cout << "O valor dobrado é:" << v << endl;
    return 0;
}
