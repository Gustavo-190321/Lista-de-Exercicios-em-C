#include <stdio.h>
#include <stdlib.h>

/*
Autor: Gustavo Murilo Costa
3� Periodo  
*/

int main(int argc, char *argv[]) {
	
	//variaveis
	int salario;
	float kw,desconto;
	
	printf("Digite o salario minimo:\n");
    scanf("%d", &salario);
    
    printf("Quantidade de quilowatts consumida:\n");
    scanf("%f", &kw);
    
    printf ("O valor, em reais, de cada quilowatt: %d\n",salario/5);
    
    //opera��o 1
    kw = (kw * (salario/5));
    
    printf ("O valor, em reais, a ser pago por essa residencia: %.2f\n",kw);
    
    //oprera��o 2
    desconto = (kw/100*-15+kw);
    
    printf ("O valor, em reais, a ser pago com 15 por cento de desconto: %.2f\n",desconto);
    
	return 0;
}
