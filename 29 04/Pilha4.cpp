#include <iostream>
#include <stack>
using namespace std;

void pegarPartes(stack<int> p) {
    stack<int> aux;
    int n = p.size();

    // Exemplo de 3 partes (índices a partir do topo)
    int a1 = 1, b1 = 2; // primeira parte
    int a2 = 4, b2 = 5; // segunda parte
    int a3 = 7, b3 = 8; // terceira parte

    int pos = 0;

    while (!p.empty()) {
        int val = p.top();
        p.pop();

        if ((pos >= a1 && pos <= b1) ||
            (pos >= a2 && pos <= b2) ||
            (pos >= a3 && pos <= b3)) {
            cout << val << " ";
        }

        aux.push(val);
        pos++;
    }

    cout << endl;

    // reconstruir pilha original (opcional)
    while (!aux.empty()) {
        p.push(aux.top());
        aux.pop();
    }
}

int main() {
    stack<int> p;

    for (int i = 1; i <= 10; i++) {
        p.push(i); // 10 será o topo
    }

    pegarPartes(p);

    return 0;
}
