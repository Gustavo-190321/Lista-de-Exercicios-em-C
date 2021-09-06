#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
Autor: Gustavo Murilo Costa 
3º Periodo
*/
int conta;



void cont(){
	if(conta > 0){
		printf("Parabens, vc ganhou: %d reais\n",conta);
	}
	else if(conta < 0){
		printf("Ta me devendo: %d reais\n",conta);
	}
	else{
		printf("Nao ganhou nem perdeu,ficou com %d reais\n",conta);
	}
	conta = 0;
	}
void sort(){

    int valor;
    valor = rand() %3;
    
    if(valor ==2){
    conta = conta - valor;
	}
	else{
		conta = conta + valor;
	}
}

int main()
 {
    int op;
    srand(time(NULL));
    do{
    	printf("Digite a opcao desejada:\n");
    	printf("1-SORTEAR VALOR\n");
    	printf("2-PARAR E CONTABILIZAR O SALDO\n");
    	printf("3-SAIR\n");
    	scanf("%d",&op);

	switch(op){
		case 1:
			sort();
			break;
		case 2:
			cont();
			break;
		case 3:
			printf("Volte Sempre\n");
			break;
		default:
			printf("Opção invalida");
			break;
	}}while(op);
return 0;
}
