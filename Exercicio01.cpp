/* EXERCICIO 01

Escreva um Programa que leia tr�s numeros inteiros e positivos (A, B, C) e calcule a seguinte express�o:
D=R+S / 2, Onde R = (A + B) � e S = (B + C)�

*/
#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

main(){
       int A, B, C, D, R, S;
       cout << "Por favor, informe as medidas dos 3 lados: " << endl;
       cin >> A >> B >> C;
       
       R=pow((A + B),2);
       S=pow((B + C),2);	       
       D=(R + S)/2;
	
	if ((A >= 0) && (B >=0) && (C >= 0)){       
	cout << "O calculo referente aos n�meros " << A << " " << B << " " << C << " " << "= " << D << endl;
	}else {
	cout << "Digite apenas numeros inteiros e positivos: " << endl;
	}
  
	return 0;
//     system("pause");
       
}
                 
