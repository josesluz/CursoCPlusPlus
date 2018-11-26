/* ATIVIDADE 05
Escreva um programa que leia as medidas dos lados do tri�ngulo e escreva se ele � equil�tero, is�celes, escaleno.
Tri�ngulo Equil�tero: 3 lados iguais 
Tri�ngulo Is�celes: 2 lados iguais
Tri�ngulo Escaleno: 3 lados diferentes
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

main(){
       int lado1, lado2, lado3;
       cout << "Por favor, informe as medidas dos 3 lados: " << endl;
       cin >> lado1 >> lado2 >> lado3;
       
       if ((lado1 == lado2) && (lado1 == lado3)){
                 cout << "Equilatero" << endl;
       } else if (((lado1 == lado2) && (lado1 != lado3)) ||
              ((lado2 == lado3) && (lado2 != lado1)) ||
              ((lado3 == lado1) && (lado3 != lado2))){
                 cout << "Isoceles" << endl;
       } else {
              cout << "Escaleno" << endl;
       }
      
       system("pause");
       
}
                 
