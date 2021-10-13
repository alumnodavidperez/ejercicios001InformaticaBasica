/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author David Enrique Pérez Pérez
 * @date 09 de octubre de 2021
 * @brief  Dice si un número es par o impar. 
 *
 */

#include<iostream>
using namespace std;

int main() {
int number;
    cout << "Escriba un número: ";
    cin >> number;
    if (number % 2 == 0) 
        cout << "El número es par.\n";
    else 
        cout << "El número es impar.\n";
    return 0;
}