#include <iostream>
#include "libreria.h"
using namespace std;
int selector;
int main()
{
    cout << "Hello" << endl;//bonitos

    while (1) {// ciclo infinito
        //menu de opciones
        cout << "menu" << endl;
        cout << "select 1: registrar" << endl;
        cout << "select 2: buscar" << endl;
        cout << "select 3: buscar por origen y destino" << endl;
        cin >> selector;//seleccionar una opcion

        switch (selector) {// conjunto de casos

            case 1:
                //rellenar datos///////////////
                rellenado_ticket();
                break;
            case 2:
                //manda a llamar la funcion para buscar boleto por numero
                int bol;
                cout << "Dame el numero de boleto" << endl;
                cin >> bol;
                bol = bol - 1;
                fnbuscar_ticket(bol);
                break;
            case 3:
            {
                string ori;//declaracion de cadena para la comparacion del origen
                string dest;// declaracion de cadena para la comparacion del destino
                int dd, mm, aa;
                int boletos[25];// arreglo para guardar los boletos con mismo destino
                cout << "Dime el origen" << endl;
                cin >> ori;
                cout << "Dime el destino" << endl;
                cin >> dest;
                cout << "fecha:" << endl;
                cout << " dia:" << endl;
                cin >> dd;
                cout << " mes:" << endl;
                cin >> mm;
                cout << " año:" << endl;
                cin >> aa;
                //manda a llamar la funcion para determinar el numero de boletos con mismo origen y destino
                cout << "Hay " << fnbuscar_igualdades(ori, dest,dd,mm,aa, boletos) << " destino(s) iguales" << endl;
                //imprime los boletos en los cuales se repite el origen y el destino
                for (int x = 0; x < fnbuscar_igualdades(ori, dest, dd, mm, aa, boletos); x++) {
                    cout << boletos[x] << endl;
                }
            }
                break;

            default:
                //funcion de salida para que no se vea feo :)
                cout << "Adios POPO!!! :)" << endl;
                return 0;
                break;
        }
    }
    return 0;
}