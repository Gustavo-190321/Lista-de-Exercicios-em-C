#include <stdio.h>
#include <stdlib.h>

/*
Autor: Gustavo Murilo Costa
3º Periodo  
*/

int main(int argc, char *argv[]) {
	
	//variaveis
	int fahren ,celsius;
	
	printf("Digite um valor para converter celsius para fahrenheit:\n");
	scanf("%d",&celsius);
	
	//operadores
	fahren =((9 * celsius / 5)+32);
	
	printf("O valor em fahrenheit eh: %d\n",fahren);
	
	return 0;
}
