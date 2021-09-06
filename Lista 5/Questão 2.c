#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/
void al(){
  int i;
  printf("Gerando valores aleatorios entre 5 e 20:\n\n");
  srand(time(NULL));
  
  for (i=0; i < 50; i++){
    printf("%d ",5+(rand() %16));
  }
  getch();
}
int main(){
	al();
}
