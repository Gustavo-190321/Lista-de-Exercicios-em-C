#include <stdio.h>
#include <stdlib.h>

/* 
Autor Gustavo Murilo Costa
3� Periodo
*/

int main(int argc, char *argv[]) {

	char cat; 
  	printf("Digite uma letra das categorias I, J ou A :\n");
  	scanf("%c", &cat);
 
  if ((cat =='I') || (cat == 'i')){
  	printf("Vc selecionou o infatil.");
  }
  else if ((cat =='J') || (cat == 'j')){
  	
  	printf("Vc selecionou o juvenil.");
  }
  else if ((cat =='A') || (cat == 'a')){
  	printf("Vc selecionou o adulto.");
  }
    else if ('a' != 'z'){
  	printf("Nenhuma categoria valida.");
  }
	
	return 0;
}
