#include <stdio.h>

/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/

int main(void){
  int V[5],i,c;

  printf("digite 5 numeros\n");

  for (i=0;i<5;i++){
  scanf("%d",&V[i]);
  }

  for (i=0;i<5;i++){
    printf("%d,",V[i]);
  }

  int *p = V;
  printf("\nPrimeiro numero do vetor:%d",*p);

  for(c=0;c < 4;c++){
    ++p;
  }

  printf("\nUltimo numero do vetor:%d",*p);
  return 0;
}
