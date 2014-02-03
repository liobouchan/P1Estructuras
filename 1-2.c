#include <stdio.h>
#include <conio.h>

void ingreso(char *);
void mayusculas(char *);
void minusculas(char *);

int main(void){

  char string[256];
  ingreso(string);

  printf("FRASE ORIGINAL: %s\n", string);

  mayusculas(&string[0]);

  printf("MAYUSCULA: %s\n",string);

  minusculas(string);

  printf("MINUSCULA: %s\n",string);

  getch();

}

void ingreso(char *s){

  system ("cls");

  printf("INGRESE UNA FRASE\n");

  gets(s);

}

void mayusculas(char *s){

for( ; *s!='\0'; s++)
  if(*s>='a' && *s<='z')
    *s-=(char)32;

}

void minusculas(char *s){

while(*s!='\0'){

if(*s>='A' && *s<='Z')
  *s+=(char)32;
  s++;
}

}

void convierte(char *s){
    
}