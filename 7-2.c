#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void copiarApuntador (char*,char*);
void copiarString (char* , char*);

int main(){
  char *c1, *c2;
 
  c1=(char*)malloc(20*sizeof(char));
  c2=(char*)malloc(20*sizeof(char));
   
  if ((c1==NULL)||(c2==NULL)){
    printf ("Error de menu");
    exit (-1);
  }

  printf ("introduce una cadena: ");
  gets (c1);

  copiarApuntador (c1,c2);
  printf("Con Operaciones de Punteros %s\n",c2);

  copiarString (c1,c2);
}
 
void copiarApuntador (char *c1, char *c2){
  while(*c1 != '\0'){
    *c2++ = *c1++;
  }
}

void copiarString (char *c1, char *c2){
  strcpy (c2 , c1);
  printf("Con operaciones String %s\n", c2 );
}