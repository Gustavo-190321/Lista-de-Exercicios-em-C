#include <stdio.h>
#include <stdlib.h>
#include "stringFulano.h"

int comprimento (char *str){
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void copia (char *dest, char *orig){
    int i = 0;

    while ((dest[i] = orig[i]) != '\0')
    {
        i++;
    }

    return dest;
}

void concatena (char* prim, char* seg){

    int i = 0, j = 0;
    while(prim[i]!='\0') { ++i; }
    while(seg[j]!='\0')
    {
        prim[i]=seg[j];
        j++; i++;
    }
    prim[i]='\0';
    return prim;
}

int compara(char* prim, char* seg){
    int i;
 for (i=0; prim[i] != '\0' && seg[i] != '\0'; i++) {
    if (prim[i] < seg[i])
        return -1;
    if (prim[i] > seg[i])
        return 1;
        }
    return 0;
}


