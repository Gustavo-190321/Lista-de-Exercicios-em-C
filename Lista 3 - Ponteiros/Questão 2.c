#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa
4º Periodo
*/

int *V;
float tam;

void leitura(){
int i;
printf("Digite o tamanho do vetor\n");
scanf ("%f", &tam);

V = (int *) malloc( tam * sizeof(float) );
if (V == NULL)
exit(EXIT_FAILURE);

printf("Digite as notas\n");
for (i = 0; i < tam; i++)
scanf("%d", &V[i]);
}

void imprime(){
int i;
float total;
for (i = 0; i < tam; i++)
total  += V[i];
printf("Media: %.2f\n",total / tam);
}

int main(){

leitura();
imprime();

free(V);
V = NULL;

return 0;
}
