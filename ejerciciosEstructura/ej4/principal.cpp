#include <iostream>
#include <string>
#include "funciones.cpp"
using namespace std;

main() {
    int opcion;

    do {
        system("cls || clear");
        cout << endl << "1. Agregar articulos" << endl;
        cout << "2. Revisar inventario" << endl;
        cout << "3. Salir" << endl;
        cout << "Escoja: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                system("cls || clear");
                agregar();
                system("pause");
                break;
            case 2:
                system("cls || clear");
                revisar();
                system("pause");
                break;
            case 3:
                cout << endl << "Saliendo..." << endl;
                break;
            default:
                cout << endl << "Opcion invalida..." << endl;
        }
    } while (opcion != 3);
}