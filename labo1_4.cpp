//Heberth Valvede Gardela
//B37174
//Laboratorio 1
//IE0724

//Histograma numeros aleatorios con gnuplot
//Al compilar usar -std=gnu++11

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "gnuplot.h"

using namespace std;

int main (void) {
    int i, j;
    int cont[10], num[50];

    //Inicializa contadores
    for (i=0; i<10; i++) {
        cont[i]=0;
    }

    //Genera los numeros aleatorios y cuenta cuantas veces salio cada uno
    srand(time(0));
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

    //Genera un archivo con los resultados
    ofstream fs("histograma.txt");
    for (i=0; i<10; i++) {
        fs << i << " " << cont[i] << endl;
    }
    fs.close();

    //Grafica el resultado
    Gnuplot plot;
    plot ("set terminal png");
    plot ("set output 'histograma.png'");
    plot ("set xrange [-0.5:9.5]");
    plot ("set xtics (0,1,2,3,4,5,6,7,8,9)");
    plot ("set yrange [0:]");
    plot ("set xlabel 'Números'");
    plot ("set ylabel 'Frecuencia'");
    plot ("set title 'Histograma de frecuencia de números aleaotrios entre 0 y 9.'");
    plot ("set boxwidth 0.5 relative");
    plot ("plot 'histograma.txt' with boxes");

    return (0);
}
