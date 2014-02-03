/* Programa al que se le pasa una cadena de caracteres en minusculas */
/* y llama a una funcion que convertira esa cadena en mayusculas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

void MinToMay(char string[]); /* cabecera de la funcion */

/* Funcion que convierte minusculas a mayusculas */
void MinToMay(char string[]) { 
  int i=0; 
  int desp='a'-'A'; 
  for (i=0;string[i]!='\0';++i) { 
    if(string[i]>='a'&&string[i]<='z') { 
      string[i]=string[i]-desp; 
    } 
  } 
}

int main() {
  char cadena[80];
  system ("cls");
  printf("Introduce una cadena:");
  gets(cadena);
  MinToMay(cadena); /* Llama a la funcion */
  printf ("En Mayusculas: %s\n", cadena); getch(); 
}