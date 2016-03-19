//Heberth Valvede Gardela
//B37174
//Laboratorio 1
//IE0724

//Generador numeros aleatorios con srand y rand

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (void) {
    int cant, num, i;

    //Solicita cuantos numeros generar
    cout << "Digite cuantos numeros aleatorios desea generar:   ";
    cin >> cant;
    cout << "Los numeros son:" << endl;

    //Genera los numeros a partir de una semilla e imprime cada uno despues de generarlo
    srand(time(0));
    for (i=0; i<cant; i++){
        num = rand();
        cout << num << endl;
    }
    return (0);
}
