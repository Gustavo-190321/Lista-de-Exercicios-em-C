#include <stdio.h>
#include <stdlib.h>

/*
Nome: Gustavo Murilo Costa
3º período
*/


int main(int argc, char *argv[]) {
	
	const double PI = 3.14159265; 
	PI = 3.2; /*<-Estava dando erro por causa da variavel PI que esta registrada em const double, nao podendo ser alterada.*/
    printf("%.4f", PI);
    
	return 0;
}
