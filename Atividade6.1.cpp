/* ATIVIDADE 06
As ma��s custam R$ 0,30 compradas menos de uma R$ 0,25 se forem compradas a d�zia.
Escreva um programa que leia o n�mero de ma��s compradas, calcule e escreva o valor da compra.
*/
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
