#include <iostream>
#include <vector>

using namespace std;

int somaVetor(vector<int> v) {
    int soma = 0;
    for (int i = 0; i < v.size(); i++) {
        soma += v[i];
    }
    return soma;
}

int main() {
    vector<int> vetor;
    int valor;

    cout << "Digite numeros (digite 0 para parar):\n";

    while (true) {
        cin >> valor;
        if (valor == 0)
            break;
        vetor.push_back(valor);
    }

    cout << "Soma dos elementos: " << somaVetor(vetor) << endl;

    return 0;
}
