//Heberth Valvede Gardela
//B37174
//Laboratorio 1
//IE0724

//Generador numeros aleatorios con random

#include <iostream>
#include <random>

using namespace std;

int main (void) {
    int cant, i;
    random_device random;

    //Solicita cuantos numeros generar
    cout << "Digite cuantos numeros aleatorios desea generar:   ";
    cin >> cant;
    cout << "Los numeros son:" << endl;

    //Genera los numeros aleatorios e imprime cada uno despues de generarlo
    for (i=0; i<cant; i++){
        cout << random() << endl;
    }
    return (0);
}
