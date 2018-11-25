/* ATIVIDADE 7
VETORES
*/
#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

main(){

       float valores[3] = {152.63, 178.98, 205.00};
       cout << valores [1] << endl;
       
       string cidade = "Salvador";
       cout << cidade[4] << endl;
       
       string cidade2 = "Lisboa";
       cout << cidade2 << endl;
       
       string palavras[4] = {};
       palavras[0] = cidade;
       palavras[1] = cidade2;
       
       int volta = 0;
       int tamanho = sizeof(valores)/sizeof(*valores);

       while(volta < tamanho){
       cout << valores[volta] << endl;
       volta++;
       }
       cout << "Imprimindo  com o for" << endl;
       
       for(int i = 0; i < tamanho; i++){
        cout << valores[i] << endl;
        }
       system("pause");       
} 
