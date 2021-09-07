#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa 
3º Periodo
*/
int main(){

int V[9] = {5,10,18,24,39,43,55,69,78};
int i,quant,flag;
int V2 [9];

printf("Digite um numero:\n");
scanf("%d",&quant);
flag =0;

for(i=0;i<9;i++){
	if(!flag){
		V2[i] = V[i];
		if(V[i] == quant){
			flag = 1;
		}
		else{
		V2[i-1] = V[i];
	}}}
	for(i=0;i<9;i++){
		printf("%d",V2[i]);
	}
return 0;
}
