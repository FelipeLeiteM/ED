#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lista;
    int valor;

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> valor;
        lista.push_back(valor);
    }
	
    for (auto it = lista.begin(); it != lista.end(); ++it) {
        auto temp = it;
        ++temp;

        while (temp != lista.end()) {
            if (*it == *temp)
                temp = lista.erase(temp);
            else
                ++temp;
        }
    }

    cout << "\nLista sem duplicados: ";
    for (int n : lista)
        cout << n << " ";

    return 0;
}
