#include <stdio.h>
#include <stdlib.h>

/* 
Autor: Gustavo Murilo Costa 
3� Periodo
*/

int main(int argc, char *argv[]) {
    int x, y, z;
    printf("Digite 3 numeros inteiros positivos :\n");
    scanf("%d %d %d", &x, &y, &z);
    if (x > z) {
        int tmp = z;
        y = x;
        x = tmp;
    }
    else if (x > y) {
        int tmp = y;
        y = x;
        x = tmp;
    }
    else if (y > z) {
        int tmp = z;
        z = y;
        y = tmp;
    }
    else if (x,y,z < 0){
    	printf ("Numero invalido");
	}
    else{
    	printf("%d %d %d", x, y, z);
	}
	return 0;
}
