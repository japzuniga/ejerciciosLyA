// Hacer un programa que sume los números pares comprendidos entre 100 y 200.

#include <iostream>
using namespace std;

void sumarPares()
{
    int suma = 0;
    int i = 100;
    while (i <= 200)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }

        i++;
    }

    cout << "la suma de los numeros pares entre 100 y 200 es " << suma << endl;
}

main()
{
    sumarPares();
}