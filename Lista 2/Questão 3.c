#include <stdio.h>
#include <stdlib.h>

/* 
Nome: Gustavo Murilo Costa
3� per�odo
*/

int main(int argc, char *argv[]) {

	//variaveis
	int dias, meses, anos;
	
	printf("Digite sua idade expressa em anos:\n");
    scanf("%d", &anos);
    
    printf("Digite sua idade expressa em meses:\n");
    scanf("%d", &meses);
    
    printf("Digite sua idade expressa em dias:\n");
    scanf("%d", &dias);
    
    //operadores
    dias= (dias+(anos*365)+(meses*30));
    
    printf("Sua idade eh equivalente a :%d dias", dias);
    
    return 0;
}
