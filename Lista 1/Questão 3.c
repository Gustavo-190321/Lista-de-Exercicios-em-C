#include <stdio.h>
#include <stdlib.h>

/* 
Nome:Gustavo Murilo Costa
3� per�odo
*/

int main(int argc, char *argv[]) {

	char letra;
	int quantidade;
	int valor; //nao coloquei pre�o ,pois, o c* nao receonhece o '�'.
	
	printf("Pressione a tecla 'a' para selecionar azeite:\n"); //comando para imprimir o texto insirido.
	scanf("%c",&letra);
	fflush(stdin);
	
	printf("Selecione a quantidade:\n");
	scanf("%d",&quantidade); //comando para armazenar caracter insirido.
	fflush(stdin);
	
	printf("Valor:\n");
	scanf("%d",&valor);
	fflush(stdin); //comando para evitar que o '\n' n�o seja armazenado no buffer do teclado.

	printf("Letra pressionada: %c\nQuantidade: %d\nValor: %d",letra,quantidade,valor); //comando de impress�o dos dados que ficaram armazenados no 'scanf'.
	
	return 0;
}

