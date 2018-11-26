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
       float valor = 0;
       int qtdFruta, duzia, unitarias;
      
      
       cout << "Digite a quantidade de Macas: " << endl;
       cin >> qtdFruta;
       
       duzia = qtdFruta / 12;
       unitarias = qtdFruta % 12;       
       
       if (duzia != 0){
          valor = ((12 * duzia) * 0.25);
       }
       
       if (unitarias != 0){
          valor = valor + (unitarias*0.30);
       }          
       cout << "Resultado: " << valor << endl;
       
       system("pause");      
       
}
