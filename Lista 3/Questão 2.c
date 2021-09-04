#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/

int main(int argc, char *argv[]) {
	int saco, gato,resto;
	
	printf("Qual seria o peso do saco:\n");
	scanf("%d",&saco);
	
	printf("Quantidade fornecida para o gato:\n");
	scanf("%d",&gato);
	
	if (saco * 1000) {
		(saco - gato) == resto;
		((resto*2)*5);
		(resto < 0);
		printf ("ração não eh suficiente");
	}
	else if (saco - gato == resto ){
		((resto/2)/5);
	}
	else if (resto > 0){
		printf ("A porção de ração restante no saco apos 5 dias e de: %d ",resto);
    }
	else{
		(resto < 0);
		printf ("racao nao eh suficiente");
	}
	return 0;
}
