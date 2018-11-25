/* ATIVIDADE 09
SWITCH
*/
#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

main(){
       int opcao;
       cout << "Digite o que deseja: " << endl;
       cin >> opcao;
       
       switch(opcao){
           case 1:
           case 2:
                cout << "Aguarde a telefonista!" << endl;
                break;
           case 3:
           case 4:
           case 5:
                cout << "O boleto foi enviado via SMS" << endl;
                break;
           case 6:
           case 7:
                cout << "Colocar créditos" << endl;
                break;
           default:
                cout << "Chamada encerrada" << endl;
       }

       system("pause");       
} 
