#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/* 
Autor: Gustavo Murilo Costa
3º Periodo
*/
int main(){
int i, j, aux, numero[10];

     for( i=0; i<9; i++ ){
          printf("\nDigite os valores: \n");
          scanf("%d",&numero[i]);
          }

        for( i=0; i<9; i++ ){
            for( j=i+1; j<9; j++ ){
                if( numero[i] > numero[j] ){
                    aux = numero[i];
                    numero[i] = numero[j];
                    numero[j] = aux;
					}}}
            
    printf("\n Numeros media em ordem:\n");
        for(i=0;i<=9;i++){
            printf("\n%d",numero[i]);
           }     
	return 0;
}
