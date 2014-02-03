#include <stdio.h>
#include <conio.h>

void ingreso(char *);
void mayusculas(char *);
void minusculas(char *);

void ingreso(char *s){
  system ("cls");
  printf("Ingresar una cadena: \n");
  gets(s);
}

void mayusculas(char *s){

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

  ingreso(string);

  mayusculas(&string[0]);
  printf("Convertido a mayusculas: %s\n",string);
/*
  minusculas(string);
  printf("Convertido a minusculas: %s\n",string);
*/
  getch();

}


void minusculas(char *s){

while(*s!='\0'){

if(*s>='A' && *s<='Z')
  *s+=(char)32;
  s++;
}

}