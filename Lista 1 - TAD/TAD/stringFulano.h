/* Fun��es oferecidas pelo m�dulo stringFulano.h */

//Retorna o n�mero de caracteres da string 'str' passada como par�metro
int comprimento (char *str);

//Copia os caracteres da string 'orig' (origem) para 'dest' (destino)
void copia (char *dest, char *orig);

//Concatena a string 'seg' na string 'prim'
void concatena (char* prim, char* seg);

/*Compara qual string � menor, lexicograficamente. Retornos:
Menor que zero: 'prim' � menor que 'seg'
Zero: 'prim' � igual a 'seg'
Maior que zero: 'prim' � maior que 'seg' */
int compara(char* prim, char* seg);
