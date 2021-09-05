#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/

int main(int argc, char *argv[]) {
	int a ,b,x;
	
	printf(" Digite dois valores\n");
	scanf("%d", &a);
	scanf("%d", &b);
	do{	
	printf("Os numeros digitados foram %d e %d\n",a,b);
	if (b <= 0)
	{
	printf("Digite outro valor pra b\n");
	scanf("%d",&b);
	printf("O valor eh de %d \n",a / b);
	}	
	x++;
	}while (x <= 0);
	
	return 0;
}
