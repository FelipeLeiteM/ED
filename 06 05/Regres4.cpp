#include <iostream>

using namespace std;
int soma(int n){
	int s = 0;
	for(int i=0; i<=n; i++){
		s *= i;
	}
	return s;
}


int main(){
	cout << soma(5) << endl;
	return 0;
}
