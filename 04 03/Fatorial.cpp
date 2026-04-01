#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main(){

int n, f=1, i;

cout << "Digite o número: ";
    cin >> n;
    if (n > 0){
    
        for (i = 1; i <= n; i++){
            f *= i;
            cout << f << endl;
        }
    }
    
    
}
