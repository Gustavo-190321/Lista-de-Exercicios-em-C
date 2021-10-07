#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa
4º Periodo
*/

int main(){
int i,*V;
float tam,total;
total = 0;

printf("Digite o tamanho do vetor\n");
scanf ("%f", &tam);

V = (int *) malloc( tam * sizeof(float) );
if (V == NULL)
exit(EXIT_FAILURE);

printf("Digite as notas\n");
for (i = 0; i < tam; i++)
scanf("%d", &V[i]);

for (i = 0; i < tam; i++){
  total += V[i];
}
printf("Media: %.2f\n",total / tam);
free(V);
V = NULL;
return 0;
}
