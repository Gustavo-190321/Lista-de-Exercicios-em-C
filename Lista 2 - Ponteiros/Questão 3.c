#include <stdio.h>

/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/

void min_max(int *t){
  int V1[5],i;
  *t = V1[0];
  for(i=0;i<4;i++){
    t++;
  }
}

int main(void){
  int V[5],i;
  printf("digite 5 numeros\n");
  for (i=0;i<5;i++){
  scanf("%d",&V[i]);
  }
  min_max(V);
  printf("\nUltimo numero do vetor:%d",V[4]);
  return 0;
}

