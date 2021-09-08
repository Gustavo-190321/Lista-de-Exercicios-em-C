#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Quant(char c) {
  if(c >= 48 && c <= 57) {
    return 1;
  }

  if(c >= 65 && c <= 90) {
    return 1; 
  }

  if(c >= 97 && c <= 122) {
    return 1;
  }

  return 0;
}

int main(void) {
    int *map = (int *)calloc(128, sizeof(int));
    int i = 0;

    char *test = "PARALELEPIPEDO";
    char tmp;

    do {
        tmp = test[i++];
        if (Quant(tmp)) {
            map[tmp]++;
        }
    } while (tmp != '\0');

    for (i = 0; i < 128; i++) {
        if (map[i] != 0) {
            printf("%c = %d\n", i, map[i]);
        }
    }

    return 0;
}
