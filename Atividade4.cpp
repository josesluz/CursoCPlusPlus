/* ATIVIDADE 4
>> Crie um programapara informar se o valor digitado � par ou impar.
1) Declara��o de variaveis
2) Mensagem solicitando dados
3) Armazenar dados digitado
4) Checar se � par ou impar
*/
#include <iostream>
using std::cout;
using std::cin;
using std ::endl;

main(){
       short numero = 0;
       
       while(numero != -1){
       cout << "Digite um numero ou -1 para sair:" << endl;
       cin >> numero;
       
       if((numero % 2)==0){ //Se resto da divis�o for igual a 0
            cout << "O numero " << numero << " foi par" << endl;
            } else {
              cout << "O numero " << numero << " foi impar" << endl;
                   }
       }         
       system("pause");
       return 0;
}
