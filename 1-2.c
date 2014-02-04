/*!
 *  \mainpage Practica 1
 *  \author -Juárez Bouchan José Leonardo\n
            -Martínez Miranda Erubey Gustavo\n
            -Rodríguez Rosas Daniel Arturo\n  
 *  \date 1 de Enero del 2014  
   @date Creado el 1 de Enero del 2014 por alumnos del grupo 1CV4
*/
#include <stdio.h>//Libreria principal
#include <conio.h>// Libreria conio, utilizada para contener los prototipos de las funciones

//Declaracion de Prototipos
void texto(char *);
void convertir(char *);

void texto(char *s){
  system ("cls");
  printf("Ingresar una cadena: \n");
  gets(s);
}

void convertir(char *s){
  for( ; *s!='\0'; s++){
    if(*s>='a' && *s<='z'){
      *s-=(char)32;
    }else{
      while(*s!='\0'){
        *s+=(char)32;
        s++;
      }
    }
  }
}

int main(void){
  char string[256];

  texto(string);

  convertir(&string[0]);
  printf("Tu texto convertido: %s\n",string);

  getch();
}