#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, x, y;
	printf("coluna:\n");
	scanf("%d",&x);
	printf("linha:\n");
	scanf("%d",&y);
	printf("Tabela 3x4:\n");
	for(i = 1; i<= 3; i++){ 
		for(j = 1; j <= 4; j++){
			printf("- ");
			if ((x == i) && (y == j)){
				printf("X ");}
		}
		printf("\n");
	}
	return 0;
}
