#include <iostream>
#include <string>

using namespace std;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;

class Pessoa{
      public:
          //Caracteristicas - Vari�veis
          string nome;
          int idade;
               
          //M�todos - Fun��es
          void beber(){ // void, utilizado para n�o exibir retorno, apenas executa o que est� nele.
               cout << nome << " esta bebendo" << endl;
               }
               
          void andar(){ // void, utilizado para n�o exibir retorno, apenas executa o que est� nele.
               cout << nome << " esta andando" << endl;
               }               
               
          Pessoa(string n){
               nome = n;                                          
               }
};
