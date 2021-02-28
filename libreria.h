#include <iostream>

using namespace std;
/////////////////////////////vairbles globales////////////////////////////////////////////
int n = 25;
int i = 0;
int numboleto[25] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
//////////////////////////////////////////////////////////////////////////////////////////

////////////////clases y estruturas//////////////////////////////////////////////////////
struct viajes {//creacion de la estructura
    string origen;
    string destino;
    int precios;
    int dd;
    int mm;
    int aa;
}ticket[25];//declaracion de la variable en forma de arreglo (global)
//ticket es una variable de tipo viajes
/////////////////////////////
//funcion de relleno de datos
void rellenado_ticket(void) {
    cout << "Origen: ";
    cin >> ticket[i].origen;
    cout << "Destino: ";
    cin >> ticket[i].destino;
    cout << "fecha:" << endl;
    cout << " dia:" << endl;
    cin >> ticket[i].dd;
    cout << " mes:" << endl;
    cin >> ticket[i].mm;
    cout << " año:" << endl;
    cin >> ticket[i].aa;
    cout << "Precio: " << endl;
    cin >> ticket[i].precios;
    i++;
}
bool fnbuscar_ticket(int numero) {//funcion busqueda de boleto por el numero
    if (numero > i) {
        return false;
    }
    else {
        cout << "Origen: ";
        cout << ticket[numero].origen << endl;;
        cout << "Destino: ";
        cout << ticket[numero].destino << endl;;
        cout << "fecha:" << endl;
        cout << " dia:" << endl;
        cout << ticket[numero].dd << endl;;
        cout << " mes:" << endl << endl;;
        cout << ticket[numero].mm << endl;;
        cout << " año:" << endl;
        cout << ticket[numero].aa << endl;;
        cout << "Precio: " << endl;
        cout << ticket[numero].precios << endl;;
        return true;
    }
}
//busqueda de boletos por orgien y destino
int fnbuscar_igualdades(string a, string b, int dd, int mm, int aa, int boletos[25]) {
    int contador = 0;
    for (int x = 0; x <= i; x++) {
        if (a == ticket[x].origen && b == ticket[x].destino && dd == ticket[x].dd && mm == ticket[x].mm && aa == ticket[x].aa) {
            boletos[contador] = numboleto[x];
            contador++;
        }
    }
    return contador;
}
