#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

char c;
char str[10]="FELICIDADE";
int i, tam =strlen(str);
for (i=0;i<tam/2; i++){
c =str[i];
str[i]= str[tam-1-i];
str[tam-1-i] =c;

}
printf("%s\n",str);
return 0;

}
