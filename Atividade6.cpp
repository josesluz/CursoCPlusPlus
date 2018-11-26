/* ATIVIDADE 06
As maçãs custam R$ 0,30 compradas menos de uma R$ 0,25 se forem compradas a dúzia.
Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor da compra.
*/
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
       float valorUnitario;
       int quantidadeComprada;
       float valorCompra;
       
       valorUnitario = 0.30;
       valorCompra = valorUnitario * quantidadeComprada;
      
       cout << "Digite a quantidade de Macas: " << endl;
       cin >> quantidadeComprada;
       
       if ((quantidadeComprada >= 1) && (quantidadeComprada <= 12)){
       valorCompra = (quantidadeComprada*0.30);
       } else {
       valorCompra = (quantidadeComprada*0.25);
       }   
       cout << quantidadeComprada << " unidades custam " << valorCompra << endl;
        
       system("pause");      
       
       }
