/* ATIVIDADE 05
Escreva um programa que leia as medidas dos lados do triângulo e escreva se ele é equilátero, isóceles, escaleno.
Triângulo Equilátero: 3 lados iguais 
Triângulo Isóceles: 2 lados iguais
Triângulo Escaleno: 3 lados diferentes
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
                 
