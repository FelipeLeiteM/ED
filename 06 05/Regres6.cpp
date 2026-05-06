#include <iostream>
using namespace std;

int fatorial(int n) {
    int m = n;
    for (int i = n - 1; i > 0; i--) {
        m = m * i; 
    }
    return m;
}

int main() {
    cout << fatorial(5) << endl;
    return 0;
}
