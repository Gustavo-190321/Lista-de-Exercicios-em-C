
/* 
Autor Gustavo Murilo Costa
3º Periodo
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    int V1[5],V2[5],V4[2],i,x;
	float V3[5];
    for(i=0;i<5;i++){ 
        printf("Entre com o %dº elemento do primeiro vetor:\n ",i+1);
        scanf("%d",&V1[i]);
        printf("Entre com o %dº elemento do segundo vetor: \n",i+1);
        scanf("%d",&V2[i]);
}
    printf("\n\nResultado da Raiz:\n");
    for(i=0;i<5;i++){
        V3[i]=V1[i]+V2[i];
        printf("%.2f\n",sqrt(V3[i]));
    }
    printf("\n\nValor dos vetores intercalados\n");
    for(x=0;x<10;x++){
    	V4[x] = V1[i];
        printf("%d\n",V4[x]);
        V4[x] = V2[i];
        printf("%d\n",V4[x]);
    }
    return 0;
}
