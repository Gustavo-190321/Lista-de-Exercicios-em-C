#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa 
3º Periodo
*/

int main(int argc, char *argv[]) {
	int i, soma, val, resultado;
	i=1;
	while(i<=1){
	printf("Digite um valor de 0 a 100:\n");
	scanf("%d",&val);
		if(val > 100 ){
			printf("Digite um valor valido\n");
			break;
	}
	printf("digite o segundo valor de 0 a 100:\n");
	scanf("%d",&soma);
		if (soma > 100){
			printf("digite um valor valido\n");
			break;
	}
	resultado = soma + val;
	printf("O resultado eh: %d\n",resultado);
	i++;
	}
	return 0;
}
