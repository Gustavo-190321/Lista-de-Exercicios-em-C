#include <stdio.h>
#include <stdlib.h>

/*
Nome: Gustavo Murilo Costa
3º período
*/


int main(int argc, char *argv[]) {
	double PI = 3.14159265; //removi o const para ler o segundo valor de PI '3,2'.
	PI = 3.2;//<-Valor que anteriormente nao estava sendo lido.
    printf("%.2lf", PI); //substitui o valor '4' a frente de (lf-declaração da variável double) por '2' para registrar as duas casas após a vírgula.
	return 0;
}
