#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/


struct evento{
	char nome[20];
	int data[2];
	float preco;	
	}event;
event_max[20];

int main(){
	int j,i,flag;
	for(i=0;i<event_max;i++){
	printf("Digite quantos eventos:\n");
	scanf("%d",event_max[i]);
	flag=1;
	}
	printf("Digite o nome:\n");
	scanf("%s", &event.nome);
	fflush(stdin);
	printf("Digite as datas:\n");
	
	for(j=0;j<2;j++){
	scanf("%d", &event.data[j]);
}
	printf("Digite o preco:\n");
	scanf("%f", &event.preco);
	
	for(i=0;i<event_max;i++){
	printf("Total de eventos:%d\n",event_max[i]);}
	
	printf("NOME: %s\n",event.nome);
	for(j=0;j<2;j++){
		if(j<31){
		printf("Data: %d\n",event.data[j]);
		}else{
		printf("digite uma data valida");
		}
		}
	printf("preco: %.2f\n",event.preco);
	
	return 0;
}
