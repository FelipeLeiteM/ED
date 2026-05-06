#include <iostream>

using namespace std;
int somar(int n){
	int m = n;
	for(int i=m; i > 0; i--){
	
	 m = m * i; 
	 
	}
	return 0;
}
	


int main(){
	cout << somar(3) << endl;
	return 0;
}
