/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author David Enrique Pérez Pérez
 * @date 09 de octubre de 2021
 * @brief  Calcula la suma de los primeros n números de la Sucesión de Fibonacci. 
 *
 */

#include<iostream>

using namespace std;

int main() {
    unsigned long number, sum, fibonacci1, fibonacci2, fibonacci;
    cout << "Escriba un número: ";
    cin >> number;
    sum = 0;
    for(int i = 1; i <= number; ++i) {
        if (i==1) 
            fibonacci=0;
        else 
            if (i==2)
                fibonacci=1;
            else {
                fibonacci1 = 0;
                fibonacci2 = 1;
                for(int j = 2; j <= i; ++j) {
                    fibonacci = fibonacci1 + fibonacci2;
                    fibonacci1=fibonacci2;
                    fibonacci2=fibonacci;
                }
            }
        sum += fibonacci;
    }
    cout<<"\nLa suma de los primeros "<< number <<" números de la Sucesión de Fibonacci es = " << sum << "\n";
    return 0;
}
