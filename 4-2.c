/*!
 *  \mainpage Practica 1
 *  \author -Juárez Bouchan José Leonardo\n
            -Martínez Miranda Erubey Gustavo\n
            -Rodríguez Rosas Daniel Arturo\n  
 *  \date 1 de Enero del 2014  
   @date Creado el 1 de Enero del 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>//Libreria Principal
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
    printf("\nEs un palindrimo.\n");
  else
    printf("\nNo es un palindrimo.\n");
}

int main(){
  char cad[20];

  printf("Escribe una cadena: ");
  fflush(stdout);
  gets(cad);
  validarPalindroma(cad);

  return (0);
}