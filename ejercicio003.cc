/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author David Enrique Pérez Pérez
 * @date 09 de octubre de 2021
 * @brief  Crea un arreglo de 1000 números aleatorios entre 1 y 6 y cuenta cuantos 
 * 1's, 2's, 3's, 4's, 5's y 6's hay y lo muestra. 
 *
 */

#include<iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    unsigned vector[999], cuenta[5], uno=1, seis=6, mil=1000;

  srand(time(NULL));

for(int i = 0; i <= mil-1; ++i) {
                    vector[i]=uno + rand() % (seis);
                }
for(int i = 0; i <= seis-1; ++i) {
                    cuenta[i]=0;
                }

for(int i = 0; i <= mil-1; ++i) {
                    cuenta[vector[i]-uno]+=1;
                }

cout << "El resultado es:\n\n";
for(int i = 0; i <= seis-1; ++i) {

                    cout<<"\nNúmero: "<< i+1 <<" ocurrió: " << cuenta[i] << "veces.\n";
                }
            
return 0;
}


