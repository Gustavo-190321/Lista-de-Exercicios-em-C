#include <stdio.h>
#include <stdlib.h>

/* 
Autor Gustavo Murilo Costa
3º Periodo
*/

int main(int argc, char *argv[]) {
	int soma, quantidade, N;

	float media;

	soma = 0;
	quantidade = 0; 
	N = 1;

	while (N != -1) {
	printf(" Valor de N : (tecle -1 se quiser encerrar).\n",
	quantidade+1);
	scanf("%d", &N);
	if (N>=1){ 
	soma = soma + N;
	quantidade = quantidade + 1;
	}}
	if (quantidade >0){
	media = (float) soma / quantidade;
	printf("A media de N eh: %5.2f", media);
	}	
	else printf("Nenhum dado foi informado."); 
	return 0;
}
