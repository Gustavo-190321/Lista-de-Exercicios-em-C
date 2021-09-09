 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/
int main(){
	int j;
	struct evento{
	char nome[20];
	int data[2];
	float preco;	
	}event1;
	
	printf("Digite o nome:\n");
	scanf("%s", &event1.nome);
	fflush(stdin);
	printf("Digite as datas:\n");
	
	for(j=0;j<2;j++){
	scanf("%d", &event1.data[j]);
}
	printf("Digite o preco:\n");
	scanf("%f", &event1.preco);
	
	printf("NOME: %s\n",event1.nome);
	for(j=0;j<2;j++){
		if(j<31){
		printf("Data: %d\n",event1.data[j]);
		}else{
		printf("digite uma data valida");
		}
		}
	printf("preco: %.2f\n",event1.preco);
	
	return 0;
}
