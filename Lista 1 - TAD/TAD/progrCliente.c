#include <stdio.h>
#include <stdlib.h>
#include "stringFulano.h"

int main()
{
    char frase[20] = "Abacaxi";

    int quant = comprimento(frase);

    printf("A palavra %s tem: %d letras\n",frase,quant);

    char orig[20] = "Laranja",
    dest[20] = "manga";

    copia (dest,orig);

    printf("%s\n", dest);
    printf("%s\n", orig);

    char prim[20] = "Gustavo",
    seg[20] = " Costa";

    concatena (prim,seg);
    printf("%s\n",prim);

    int retorna = compara(prim,seg);
    if (retorna == 1)
     printf("\nprim eh maior que seg");
    if (retorna == -1)
       printf("\prim eh menor que seg");
    else if (retorna == 0)
    printf("\nprim eh igual a seg");
}
