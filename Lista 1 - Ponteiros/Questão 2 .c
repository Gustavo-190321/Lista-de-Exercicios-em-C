#include <stdio.h>

int main(void){
int num1 = 3, num2 = 5;
int *p = &num1;
int *q = &num2;
int c;

c = num1;
*p = num2;
*q = c;

//printf("%d\n",&num1);
printf("%d\n",*p);
printf("%d",*q);
return 0;
}
