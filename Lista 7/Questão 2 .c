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
	}event1,event2;
	
int main(){
	int j;
	printf("Digite o nome:\n");
	scanf("%s", &event1.nome);
	fflush(stdin);
	printf("Digite as datas:\n");
	for(j=0;j<2;j++){
		scanf("%d", &event1.data[j]);
	} 
	printf("Digite o preco:\n");
	scanf("%f", &event1.preco);
	
	printf("Digite o nome:\n");
	scanf("%s", &event2.nome);
	fflush(stdin);
	printf("Digite as datas:\n");
	for(j=0;j<2;j++){
		scanf("%d", &event2.data[j]);
	} 
	printf("Digite o preco:\n");
	scanf("%f", &event2.preco);
	
	printf("NOME: %s\n",event1.nome);
	for(j=0;j<2;j++){
		if(j < 31){
		printf("Data: %d\n",event1.data[j]);
		}
		else{
		printf("digite uma data valida");
		}
	printf("preco: %.2f\n",event1.preco);
	
	printf("NOME: %s\n",event2.nome);
	for(j=0;j<2;j++){
		if(j < 31){
		printf("Data: %d\n",event2.data[j]);
		}
		else{
		printf("digite uma data valida");}
		}
	printf("preco: %.2f\n",event2.preco);
	return 0;
}}
