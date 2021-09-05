#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n, positivos=0, negativos=0, num;

    for( n=1; n<=7; n++ )
    {
        printf("Digite numeros positivos e negativos:\n");
        scanf("%d", &num);
        if( num > 0 )
            positivos += num;
        else if  (num < 0){
        	negativos += num;
		}
    }
    printf("\nSoma dos positivos: %d\n", positivos);
    printf("\nsoma dos negativos: %d\n", negativos);
    
	return 0;
}
