#include <stdio.h>
#include <stdlib.h>

/* 
Autor Gustavo Murilo Costa
3º Periodo
*/
float FUNCAO_1();
float FUNCAO_2(float x,float y,float z);


float FUNCAO_1(){
float nota1,nota2,nota3;
float media;
printf("Digite nota 1:\n");
scanf("%f",&nota1);
printf("Digite nota 2:\n");
scanf("%f",&nota2);
printf("Digite nota 3:\n");
scanf("%f",&nota3);
media = FUNCAO_2(nota1,nota2,nota3);
return media;
}
float FUNCAO_2(float x,float y,float z){
float media;
media= (x+y+z)/3;
return media;
}

int main() {
	printf("A media eh %.2f",FUNCAO_1());
	return 0;
}
