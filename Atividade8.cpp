/* ATIVIDADE 08
Escreva um programa em C, que dado 2 vetores com 10 elementos:
1)Imprima os vetores com 10 elementos
2)Imprima os números do primeiro vetor que não estão presentes no segundo vetor.
3)Considere que pode haver números repetidos no vetor.

                   VETOR 1                                                           VETOR 2
                
  0   1   2   3   4    5   6    7    8    9                 indice: 0   1    2   3     4   5    6    7    8     9
==============================================                    ==================================================
| 2 | 3 | 4 | 5 | 6 | 12 | 11 | 23 | 11 | 32 |                    | 2 | 31 | 4 | 51 | 16 | 12 | 51 | 23 | 11 | 323 |
==============================================                    ==================================================
*/

#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

main(){
       int vetor1[10] = {2,3,4,5,6,12,11,23,11,32};
       int vetor2[10] = {2,31,4,51,16,12,51,23,111,323};
       int inedito[10];
       int indexInedito = 0;
       
       for (int i=0; i<10; i++){ //Primeiro for percorre VETOR1
           int procura = 0; //
           
           for(int j=0; j<10; j++){
             if(vetor1[i] != vetor2[j]){
                procura++;
           }
           
           if(procura == 10){
           inedito[indexInedito] = vetor1[i];
           indexInedito++;
           }
       }
       
     }
     
     for (int r=0; r<10; r++){
         cout << inedito[r] << endl;
         }
       system("pause");       
} 










/*
qt
ieee ranking language
*/
