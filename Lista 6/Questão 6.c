#include <stdio.h>
#include <stdlib.h>
 
void conta(char *str, int *vog, int *con){
    char *s = str;
    *vog = *con = 0;
    while(*s){
    char c = tolower(*s);        
    if(c >= 'a' && c <= 'z'){
        if(c == 'a' || c == 'e' ||
            c == 'i' || c == 'o' ||
            c == 'u'){
            *vog += 1;
        }else{
            *con += 1;
            }
        }
        *s++;
    }
}
int main(){
    char texto[] = "Testando";
    int v, c;
    conta(texto, &v, &c);
    printf("Vogais = %d\nConsoantes = %d\n", v, c);
    return 0;
}

