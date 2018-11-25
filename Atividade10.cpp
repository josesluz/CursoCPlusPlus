#include <iostream>
#include <string>

using namespace std;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;

class Pessoa{
      public:
          //Caracteristicas - Variáveis
          string nome;
          int idade;
               
          //Métodos - Funções
          void beber(){ // void, utilizado para não exibir retorno, apenas executa o que está nele.
               cout << nome << " esta bebendo" << endl;
               }
               
          void andar(){ // void, utilizado para não exibir retorno, apenas executa o que está nele.
               cout << nome << " esta andando" << endl;
               }               
               
          Pessoa(string n){
               nome = n;                                          
               }
};
