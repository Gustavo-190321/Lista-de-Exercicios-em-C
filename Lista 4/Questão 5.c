#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int num, i = 1;
    char resp = 's';
 
   	while (resp == 's'){
	printf("Digite um n%cmero. \n", 163);
    scanf ("%d", &num);
   
    if(num %2 == 0 && num %3 == 0){
        printf("O numero eh divisivel por 2 e por 3.\n",
        163, num, 130, 161);
    }
    else{
        if (num % 2 == 0 || num % 3 == 0){
            if (num %2 == 0){
                printf("O numero eh divisivel por 2.\n",
                163, num, 130, 161);      
            }
            else{
                printf("O numero eh divisivel por 3.\n",
                163, num, 130, 161);
            }}
        	else{
        		printf("O numero nao eh divisivel por 2 nem 3.\n",
        		163, num, 198, 130, 161);
        }} 	
		i++;
    	fflush(stdin);
		printf("\nDeseja continuar?(S/N)\n");
		scanf("%c",&resp);
	}
	return 0;
}
