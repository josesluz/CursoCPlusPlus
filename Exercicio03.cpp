/* EXERCICIO 03

Faça um programa que leia e notas de um aluno e caclule a média final deste aluno. Considere que a média é ponderada e que o peso das notas são: 2, 3 e 5, respectivamente.

*/
#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

main(){
	//Declaração de variaveis
       double n1, n2, n3, nota1, nota2, nota3, media;

       //Entrada de dados para calculo de nota
       cout << "Digite nota 1: " << endl;
       cin >> nota1;

       n1 = (nota1*2);
       
       cout << "Digite nota 2: " << endl;
       cin >> nota2;

       n2 = (nota2*3);

       cout << "Digite nota 3: " << endl;
       cin >> nota3;

	n3 = (nota3*5);
	
	media = ((n1+n2+n3)/10);

       cout << "Media: " << media << endl;
       
	return 0;
//     system("pause");
}
