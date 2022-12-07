#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a;
    cin >> a;
    funzione (a);

    if ((funzione(a) == true)) {
        if ((a>=65) && (a<=90)) {
            char b = a+32;
            cout << b;
        } else {
            char b = a-32;
            cout << b;
        }
    } else {
        cout << "errore";
    }

    return 0;
}
