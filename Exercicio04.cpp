/* EXERCICIO 01

Escreva um Programa que leia tres numeros inteiros e mostre o maior e o menor entre eles

José Luz - josesluz@gmail.com

*/
#include <iostream>
#include <math.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

main(){
       int num1, num2, num3, numMaior, numMenor;
       string opcao;

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
        cout << "O número maior é: " << numMaior << endl;
        cout << "O número menor é: " << numMenor << endl;
      } else {
        cout << "Foram digitados números iguais: " "(" << num1 << " , " << num2 << " , " << num3 << ")," << " repita a operação " << endl;
      }
      cout << "Deseja continuar?  [s] [sim]:\nOu digite qualquer outro cacacter para encerrar." << endl;
      cin >> opcao;
      while (opcao == "sim") {
      cout << "Por favor, informe três numeros: " << endl;
      cin >> num1 >> num2 >> num3;
      cout << "Foram digitados números iguais: " "(" << num1 << " , " << num2 << " , " << num3 << ")," << " repita a operação " << endl;
      cout << "Deseja continuar?  [S] [N]: " << endl;
      cin >> opcao;
    }
      cout << "Fim do programa" << endl;
      return 0;
//     system("pause")
}
