#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){

char string1[] = "pedro", string2[] = "maria",string3[]="joao";
int menor, result = 0;
if (strlen (string2) >  strlen (string1) < strlen(string3))
	result = strcmp(string1, string2,string3);

    printf ("A string %s",result);
   }
