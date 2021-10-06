#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/

void maior(int *a ,int *b,int *c){
}

int main() {
	int n1,n2,n3;
	int m;
	printf("Digite 3 numeros inteiros pra comparacao\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);

	maior(&n1,&n2, &n3);
	if(m < n1){
  		m = n3;
	}
	else if(m < n2){
  		m = n2;
}
	printf("Maior: %d",m);

	return 0;
}
