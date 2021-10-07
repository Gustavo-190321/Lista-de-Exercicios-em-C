#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa
4º Periodo
*/

int *V1,*V2;

void interseccao(int n1,int n2){
int i,f,*quant;
for (i = 0; i<n1; i++) {
  for (f = 0; f < n2; f++) {
    if (V1[i] == V2[f]) {
      quant = V1;
      printf("Interseccao :%d\n",quant[i]);
      }
    }
  }
quant = NULL;
}

int main() {
int i,f;
int n1,n2;
printf("Digite o tamanho do vetor n1:\n");
scanf ("%d", &n1);

V1 = (int*) malloc(n1 * sizeof(int));
if(V1==NULL){
  printf("memoria insuficiente\n");
  exit(1);
}
printf("Digite os numeros de n1:\n");
for (i = 0; i < n1; i++)
scanf("%d", &V1[i]);

printf("Digite o tamanho do vetor n2\n");
scanf ("%d", &n2);
V2 = (int*) malloc(n2 * sizeof(int));
if(V2==NULL){
  printf("memoria insuficiente\n");
  exit(1);
}
printf("Digite os numeros de n2:\n");
for (f = 0; f < n2; f++)
scanf("%d", &V2[f]);

for (i = 0; i < n1; i++)
printf("Vetor n1 :%d\n",V1[i]);
for (f = 0; f < n2; f++)
printf("Vetor n2 :%d\n",V2[f]);

interseccao(n1,n2);

free(V1);
V1 = NULL;
free(V2);
V2 = NULL;
return 0;
}
