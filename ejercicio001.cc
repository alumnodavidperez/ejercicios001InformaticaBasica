/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author David Enrique Pérez Pérez
 * @date 09 de octubre de 2021
 * @brief  Lee tres números y escribe el mayor de ellos. 
 *
 */

#include<iostream>

using namespace std;

int main() {
    unsigned long number1, number2, number3;

cout << "Escribe el primer número: ";
cin >> number1;
cout << "Escribe el segundo número: ";
cin >> number2;
cout << "Escribe el tercer número: ";
cin >> number3;

if ( number1 > number2 && number1 > number3 )
    cout<<"\nEl número mayor es: "<< number1 <<"\n";
else
    if  ( number2 > number1 && number2 > number3 )
        cout<<"\nEl número mayor es: "<< number2 <<"\n";
    else
        if  ( number3 > number1 && number3 > number2 )
            cout<<"\nEl número mayor es: "<< number3 <<"\n";
        else
            cout<<"\nLos tres números son iguales\n";
return 0;
}
