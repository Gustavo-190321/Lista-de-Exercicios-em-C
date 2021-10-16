/* Funções oferecidas pelo módulo stringFulano.h */

//Retorna o número de caracteres da string 'str' passada como parâmetro
int comprimento (char *str);

//Copia os caracteres da string 'orig' (origem) para 'dest' (destino)
void copia (char *dest, char *orig);

//Concatena a string 'seg' na string 'prim'
void concatena (char* prim, char* seg);

/*Compara qual string é menor, lexicograficamente. Retornos:
Menor que zero: 'prim' é menor que 'seg'
Zero: 'prim' é igual a 'seg'
Maior que zero: 'prim' é maior que 'seg' */
int compara(char* prim, char* seg);
