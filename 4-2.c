#include <stdio.h>
#include <string.h>

int validarPalindroma( char cad[] );

int validarPalindroma( char cad[]){
  int i,j;
  int palindromo = 1;

  j=strlen(cad)-1;
    for(i=0; i<strlen(cad)/2; i++, j--) {
      printf("Comprobando %c==%c\n", *(cad+i), *(cad+j));
      if (*(cad+i)!=*(cad+j)) {
        palindromo = 0;
        break;
      }
    }
    if (palindromo)
      printf("\nEs un palíndrimo.\n");
    else
      printf("\nNo es un palíndrimo.\n");
}

int main()
{
    char cad[20];
    int i, j;
    int palindromo = 1;
    printf("Escribe una cadena: ");
    fflush(stdout);
    gets(cad);
    validarPalindroma(cad);
 
    return (0);
}