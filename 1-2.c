#include <stdio.h>
#include <conio.h>

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