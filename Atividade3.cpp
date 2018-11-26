// Crie um prgrama que receba a temperatura em Celcius e mostre o valor em Fahrenheit
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

main(){
       
       float tCelsius, tFahrenheit;
       cout << "Digite a temperatura em Celsius: " << endl;
       cin >> tCelsius;
       
       tFahrenheit = ((tCelsius*9)/5) + 32;
       
       cout << "Temperatura convertida para Fahrenheit: " << tFahrenheit << endl;       
          
       system("pause");              
       }
