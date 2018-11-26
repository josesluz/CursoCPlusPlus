/* EXERCICIO 01

Escreva um Programa que leia tres numeros inteiros e mostre o maior e o menor entre eles

José Luz - josesluz@gmail.com

*/
#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

main(){
       int num1, num2, num3, numMaior, numMenor;
       cout << "Por favor, informe três numeros: " << endl;
       cin >> num1 >> num2 >> num3;

       if ((num1 != num2) && (num1 != num2) && (num1 != num3) && (num2 != num3))  {
      	if ((num1 > num2) && (num1 > num3)) {
      	  numMaior = num1;
        } if ((num2 > num1) && (num2 > num3)) {
          numMaior = num2;
        } if ((num3 > num1) && (num3 > num2)) {
          numMaior = num3;
        } if ((num1 < num2) && (num1 < num3)) {
      	  numMenor = num1;
        } if ((num2 < num1) && (num2 < num3)) {
          numMenor = num2;
        } if ((num3 < num1) && (num3 < num2)) {
          numMenor = num3;
        }
        cout << "O numero maior é: " << numMaior << endl;
        cout << "Números iguais: " << numMenor << endl;
      } else {
        cout << "Foram digitados números iguais: " "(" << num1 << " , " << num2 << " , " << num3 << ")," << " repita a operacao " << endl;
      }
      return 0;
//     system("pause");
}
