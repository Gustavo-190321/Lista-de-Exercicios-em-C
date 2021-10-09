#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nome[20];
float preco;
int dia;
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
  printf("Digite os dias:\n");
  for(j=0;j<3;j++){
    scanf("%d",&A[j].dia);
    }
    }

  for(i=0;i<n;i++){
    printf("\nNome: %s",A[i].nome);
    printf("\nPreco: %.2f",A[i].preco);
    for(j=0;j<3;j++)
    printf("\nDias: %d",A[j].dia);
    }
  return 0;
}