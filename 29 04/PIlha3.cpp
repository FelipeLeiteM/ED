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
	
	string expressao = "();[]";
	
	stack<int> pilha;
	for(int i=0; i<expressao.length();i++){
		char caracter = expressao[i];
		
		if(caracter == '('){
			pilha.push(caracter);
		}
		if(caracter == ')'){
			pilha.push(caracter);
		}
		else if (caracter == ';'){
			if (pilha.empty() || pilha.top() != caracter){
				cout << "End" << endl;
				while(!pilha.empty()){
					pilha.pop();
				}
				return 0;
			}
		pilha.pop();	
		}
	}
	if(pilha.empty()){
		cout << "Pilha Vazia" << endl;
		exibirp(pilha);
	}
	return 0;
	}
