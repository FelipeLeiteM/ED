#include <iostream>
#include <stack>

using namespace std;

void exibirp(stack<int> s){
	cout << "Conteudo:" << endl;
	while(!s.empty()){
		cout << "|" << s.top() << "|" << endl;
		s.pop();
	}
	cout <<"-----"<<endl;
}

int main() {
	stack<int> pilha;
	pilha.push(3);
	pilha.push(5);
	pilha.push(10);
	
	pilha.pop();

	cout << pilha.top() << endl;
	
	exibirp(pilha);
	cin >> pilha.pop();
	
	return 0;
}
