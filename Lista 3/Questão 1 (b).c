#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char cat;
	 
	printf ("Digite um numero para selecionar as categorias :\nI - INFANTIL :\nJ - JUVENIL :\nA - ADULTO :\n");
	scanf("%c",&cat);
	
	switch (cat) {
	
	case ('I'):
	printf("vc selecionou Infantil\n");
	break;
	case ('J'):
	printf("vc selecionou Juvenil\n");	
	break;
	case ('A'):
	printf("vc selecionou Adulto\n");
	break;
	default:
	printf("Categoria invalida");
	break;
}
	return 0;
}
