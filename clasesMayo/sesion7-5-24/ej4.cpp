#include <iostream>
using namespace std;

main() {
    //mostrar los numeros del 2000 al 1200
    int i = 2000;
    while (i >= 1200) {
        if (i%2 != 0) {
            cout << i << endl;
        }

        i--;
    }
}