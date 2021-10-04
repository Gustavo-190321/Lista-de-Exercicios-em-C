#include <stdio.h>

int main(void){
int num1 = 3, num2 = 5;
int *p = &num1;
int *q = &num2;
int c;

c = *p;
*p = *q;
*q = c;

printf("%d\n",*p);
printf("%d",*q);
return 0;
}
