#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
        int opcion = -1;
        do
        {
                cout << "\nMENU:\n"
                        << "1) Ejercicio 1\n"
                        << "2) Ejercicio 2\n"
                        << "3) Ejercicio 3\n"
                        << "0) Salir\n"
                        << "Ingrese una opcion: ";
                cin >> opcion;
                switch (opcion)
                {
                        case 1:
                                
                                break;
                        case 2:
                                
                                break;
                        case 3:
                               
                               break;
                        case 0:
                                cout << "Saliendo... " << endl;
                                break;
                        default:
                                cout << "Opcion no valida!" << endl;
                                break;
                }
        }
        while (opcion != 0);
        return 0;
}

