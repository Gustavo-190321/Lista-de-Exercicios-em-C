#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nome[20];
float preco;
int *dia;
int quantdias;
}Eventos;

int main() {
  Eventos *A;
  int n, i, j;

  printf("Quantos Eventos deseja cadastrar:\n");
  scanf("%d",&n);

  A = (Eventos*) malloc(n * sizeof(Eventos));
  if(!A){
    printf("Memoria insuficiente");
    exit(1);
  }
  for(i=0;i<n;i++){
  printf("Digite o nome do evento:\n");
  scanf("%s",A[i].nome);
  printf("Digite o preco:\n");
  scanf("%f",&A[i].preco);
  printf("Digite quantos dias:\n");
  scanf("%d",&A[i].quantdias);
  A[i].dia = (int*) malloc(A[i].quantdias * sizeof(float)); 
  for(j=0;j<A[i].quantdias;j++){
    scanf("%d",&A[i].dia[j]);
    }
    }

  for(i=0;i<n;i++){
    printf("\nNome: %s",A[i].nome);
    printf("\nPreco: %.2f",A[i].preco);
    for(j=0;j<A[i].quantdias;j++)
    printf("\nDias: %d",A[i].dia[j]);
    }
  return 0;
}