#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **A,i,j,k;
  int lin, col;
  printf("Digite o numero de linhas\n");
  scanf("%d", &lin);
  printf("Digite o numero de colunas\n");
  scanf("%d",&col);
  printf("Digite o valor pra a matriz\n");
  scanf("%d",&k);

  A = (int**) malloc(lin* sizeof(int*));
  if(A==NULL){
    printf("Memoria insuficiente");
    exit(1);
  }
  for(i=0;i<lin;i++)
  A[i] = (int*) malloc(col * sizeof(int));
  if(A[i] == NULL){
    printf("Memoria insuficiente");
    exit(1);
  }
  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
      A[i] [j] = k;
      k = k + 1;
    }
  }
  for(i=0;i<lin;i++){
    for(j=0;j<col;j++){
      printf("%d ",A[i] [j]);
    }
    printf("\n");
  }

  for(i=0;i<lin;i++){
    free(A[i]);
    A[i] = NULL;
  }

  free(A);
  A=NULL;

  return 0;
}