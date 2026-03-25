#include <iostream>
using namespace std;

int main() {
    string lista[5];

    cout << "Digite 5 palavras:\n";
    for (int i = 0; i < 5; i++) {
        cin >> lista[i];
    }

    cout << "\nOrdem invertida:\n";
    for (int i = 4; i >= 0; i--) {
        cout << lista[i] << endl;
    }

    return 0;
}