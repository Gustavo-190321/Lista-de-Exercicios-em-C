#include <stdio.h>
#include <stdlib.h>

/* 
Nome: Gustavo Murilo Costa
3� per�odo
*/

int main(int argc, char *argv[]) {

	int a, b, aux;
	
	printf("Digite o Valor de 'a':"); //codigo de impress�o do texto.
    scanf("%d", &a);
    
    printf("Digite um Valor para 'b': ");
    scanf("%d", &b); //codigo de armazenamento dos dados selecionados no cmd.
    
    printf("a)%4d b)%4d\n", a, b);//impress�o dos valores obtidos.
    
    aux = a; //troca de posi��o da var�avel 'a'.
    a=b; //associa��o direta aos operadores
    b = aux; //troca de posi��o da var�avel 'b'.
    
    printf("a)%4d b)%4d\n", a, b);//impress�o dos valores invertidos.
    
    return 0;
}
