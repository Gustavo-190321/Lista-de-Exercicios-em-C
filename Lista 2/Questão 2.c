#include <stdio.h>
#include <stdlib.h>

/* 
Nome:Gustavo Murilo Costa
3� per�odo
*/

int main(int argc, char *argv[]) {

	//variaveis
	int base;
	int altura;
	int area;
	
	printf("Digite a base do triangulo:\n");
	scanf("%d",&base);
	
	printf("DIgite a altura do triangulo:\n");
	scanf("%d",&altura);
	
	//operadores
	area = (base*altura)/2;
	
	printf("A area do retangulo eh: %d", area );	
	
	return 0;
}

