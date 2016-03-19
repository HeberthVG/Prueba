//Heberth Valvede Gardela
//B37174
//Laboratorio 1
//IE0724

//Histograma numeros aleatorios

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (void) {
    int i, j;
    int cont[10], num[50];

    cout << "Histograma de numeros aleaotorios del 0 al 9" << endl;

    //Inicializa contadores
    for (i=0; i<10; i++) {
        cont[i]=0;
    }

    //Genera numeros aleatorios y cuenta la frecuencia de cada uno
    for (i=0; i<50; i++){
        num[i] = rand()%10;
        switch (num[i]) {
            case 0:
                cont[0]++;
                break;
            case 1:
                cont[1]++;
                break;
            case 2:
                cont[2]++;
                break;
            case 3:
                cont[3]++;
                break;
            case 4:
                cont[4]++;
                break;
            case 5:
                cont[5]++;
                break;
            case 6:
                cont[6]++;
                break;
            case 7:
                cont[7]++;
                break;
            case 8:
                cont[8]++;
                break;
            case 9:
                cont[9]++;
                break;
        }
    }

    //Realiza el histograma
    for (i=0; i<10; i++) {
        cout << i << ": ";
        for (j=0; j<cont[i]; j++) {
            cout <<"*";
        }
        cout << "" << endl;
    }
    return (0);
}
