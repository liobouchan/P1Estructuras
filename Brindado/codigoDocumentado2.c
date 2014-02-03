/*!
 *  \mainpage Practica funciones
 *  \author -Hernandez Garcia Jacqueline\n
            -Ramirez Martinez Javier\n
            -De la Rosa Gutierrez Kaleb\n  
			-Garduño Castillo Carlos José\n
 *  \date 27 de ocubre de 2012    
   @file Funciones.c
   @brief Este es el codigo fuente de toda nuestra lista de funciones que daremos a conocer en seguida.
   @version 1.0
   @date Creado el 27 de ocubre de 2012 por alumnos del grupo 1CV1
*/

#include <stdio.h>//Libreria principal
#include <math.h>// Libreria math, utilizada por las funciones a realizar
#include <conio.h>// Libreria conio, utilizada para contener los prototipos de las funciones
//SET PATH=%PATH%;C:\MinGW\bin
void menulinearecta();          //Declaracion de prototipo menu linea recta--------------
void unouno();                  //Declaracion tema 1.1
void unodos();                  //Declaracion tema 1.2
void unotres();                 //Declaracion tema 1.3
void unocuatro();               //Declaracion tema 1.4
void unocinco();                //Declaracion tema 1.5
void menucircunferencia();      //Declaracion de prototipo menu circunferencia-----------
void dosuno();                  //Declaracion tema 2.1
void dosdos();                  //Declaracion tema 2.2
void dostres();                 //Declaracion tema 2.3
void doscuatro();               //Declaracion tema 2.4
void menucoordenadas();         //Declaracion de prototipo menu coordenadas--------------
void tresuno();                 //Declaracion tema 3.1
void tresdos();                 //Declaracion tema 3.2
void menugeneral();             //Declaracion de prototipo menu general------------------
void menut();                   //Declaracion de prototipo menu texto--------------------
void menulinearectat();         //Declaracion de prototipo menu linea recta texto
void menucircunferenciat();     //Declaracion de prototipo menu circunferencia texto
void menucoordenadaspolarest(); //Declaracion de prototipo menu coordenadas polares texto
//-----------------------------PROGRAMA PRINCIPAL----------------------------------------
/*!
 *  \var main
 *  \brief Imprime todo el contenido de cada menu disponible.
 */
int main()
{
menugeneral();
}
//-----------------------------FUNCIONES MENUS-------------------------------------------
/*!
 *  \fn menut
 *  \brief Imprime en pantalla las opciones del menu.
 */
   /**
 @fn void menut()
 @brief Esta funcion se creo unicamente para imprimirnos las opciones de las ecuaciones que podemos realizar.

 Descripcion: Esta funcion pide al usuario que ingrese la opcion de la ecuacion, posteriormente el programa lo lee y las almacena
 en la funcion; efectuara lo que se le pide y al final la funcion nos lleva a la operacion,para que asi nos muestre otro menu en el cual podemos elegir nuestra operacion que queremos realizar de nuestra ecuacion ya seleccionada.  
 Observaciones: el programa solo acepta una opcion.                                                                                                                                                                                  
 */
void menut() 
{
printf("MENU PRINCIPAL \n\n"); 
printf("1.La linea recta \n");
printf("2.La circunferencia \n");
printf("3.Coordenadas polares \n");
printf("4.Salir \n");
}
/*!
 *  \fn menulinearectat
 *  \brief Imprime en pantalla las opciones del menu de la LINEA RECTA.
 */
  /**
 @fn void menulinearectat()
 @brief Esta funcion se creo unicamente para imprimirnos las opciones de las operaciones que podemos realizar de la ecuacion de la LINEA RECTA.

 Descripcion: Esta funcion pide al usuario que ingrese la opcion de la operacion, posteriormente el programa lo lee y las almacena
 en la funcion; efectuara lo que se le pide y al final la funcion nos lleva a la operacion, para poderle ingresar los valores para que asi la pueda realizar.  
 Observaciones: el programa solo acepta una opcion para poder realizar la operacion de dicha opcion.                                                                                                                                                                                  
 */
void menulinearectat() 
{
printf("LINEA RECTA \n\n"); 
printf("1.Ecuacion de la recta dada su pendiente y un punto de la misma \n");
printf("2.Ecuacion de la recta que pasa por dos puntos \n");
printf("3.Distancia entre dos puntos del plano \n");
printf("4.Punto medio entre dos puntos del plano \n");
printf("5.Perimetro y area de un triangulo en el plano \n");
printf("6.Regresar al menu principal \n");
}
/*!
 *  \fn menucircunferenciat
 *  \brief Imprime en pantalla las opciones del menu de la CIRCUNFERENCIA.
 */
 /**
 @fn void menucircunferenciat()
 @brief Esta funcion se creo unicamente para imprimirnos las opciones de las operaciones que podemos realizar de la ecuacion de la CIRCUNFERENCIA.

 Descripcion: Esta funcion pide al usuario que ingrese la opcion de la operacion, posteriormente el programa lo lee y las almacena
 en la funcion; efectuara lo que se le pide y al final la funcion nos lleva a la operacion, para poderle ingresar los valores para que asi la pueda realizar.  
 Observaciones: el programa solo acepta una opcion para poder realizar la operacion de dicha opcion.                                                                                                                                                                                  
 */
void menucircunferenciat() 
{
printf("LA CIRCUNFERENCIA \n\n"); 
printf("1.Ecuacion de la circunferencia con centro en el origen y radio r \n");
printf("2.Ecuacion de la circunferencia con centro c y radio r \n");
printf("3.Ecuacion de la circunferencia con centro c y punto p \n");
printf("4.Ecuacion de la circunferencia con p1 y p2 como extremos del diametro \n");
printf("5.Regresar al menu principal \n");
}
/*!
 *  \fn menucoordenadaspolarest
 *  \brief Imprime en pantalla las opciones del menu de COORDENADAS POLARES.
 */
 /**
 @fn void menucoordenadaspolarest()
 @brief Esta funcion se creo unicamente para imprimirnos las opciones de las operaciones que podemos realizar de la ecuacion de COORDENADAS POLARES a RECTANGULARES o viceversa.

 Descripcion: Esta funcion pide al usuario que ingrese la opcion de la operacion, posteriormente el programa lo lee y las almacena
 en la funcion; efectuara lo que se le pide y al final la funcion nos lleva a la operacion, para poderle ingresar los valores para que asi la pueda realizar.  
 Observaciones: el programa solo acepta una opcion para poder realizar la operacion de dicha opcion.                                                                                                                                                                                  
 */
void menucoordenadaspolarest() 
{
printf("COORDENADAS POLARES \n\n"); 
printf("1.Pasar un punto de coordenadas rectangulares a polares \n");
printf("2.Pasar un punto de coordenadas polares a rectangulares \n");
printf("3.Regresar al menu principal \n");
}
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------LINEA RECTA----------------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------FUNCION 1.1----------------------------------------------
/*!
 *  \fn void unouno 
 *  \brief Realiza la ecuacion de la recta dada su pendiente y un punto de la misma 
 */
  /**
 @fn void unouno()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la recta, dada su pediente y un punto.

 Descripcion: Esta funcion pide al usuario la pendiente y un punto de la misma, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la recta para una pendiente y un punto.   
 Observaciones: el programa solo acepta tres valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void unouno() 
{
int x,y,z;
char s;
printf("Seleccionaste ecuacion de la recta dada su pendiente y un punto de la misma \n");
do{
printf("Introduce el primer punto(x): ");
scanf("%d",&x);
printf("Introduce el segundo punto(y): ");
scanf("%d",&y);
printf("Introduce la pendiente(m): ");
scanf("%d",&z);
printf("La ecuacion es: Y-(%d)=%d(X-(%d))\n",y,z,x);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 1.2----------------------------------------------
/*!
 *  \fn void unodos
 *  \brief Realiza la ecuacion de la recta que pasa por dos puntos 
 */
  /**
 @fn void unodos()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la recta que pasa por dos puntos.

 Descripcion: Esta funcion pide al usuario dos cordenadas, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la recta para dos puntos.   
 Observaciones: el programa solo acepta cuatro valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void unodos() 
{
int x1,y1,x2,y2,m;
char s;
printf("Seleccionaste ecuacion de la recta que pasa por dos puntos \n");
do{
printf("Introduce el primer punto(x1): ");
scanf("%d",&x1);
printf("Introduce el segundo punto(y1): ");
scanf("%d",&y1);
printf("Introduce el primer punto(x2): ");
scanf("%d",&x2);
printf("Introduce el segundo punto(y2): ");
scanf("%d",&y2);
m=(y2-y1)/(x2-x1);
printf("La ecuacion es: Y-(%d)/X-(%d)=%d-(%d)/%d-(%d)\n",y1,x1,y2,y1,x2,x1);
printf("La pendiente de la recta es: %d\n",m);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 1.3----------------------------------------------
/*!
 *  \fn void unotres
 *  \brief Realiza la distancia entre dos puntos del plano 
 */
   /**
 @fn void unotres()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la recta, la distancia entre dos puntos.

 Descripcion: Esta funcion pide al usuario dos puntos, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la recta para la distancia entre dos puntos.   
 Observaciones: el programa solo acepta cuatro valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void unotres() 
{
float x1,y1,x2,y2,r1,r2,d;
char s;
printf("Seleccionaste distancia entre dos puntos del plano \n");
do{
printf("Introduce el primer punto(x1): ");
scanf("%f",&x1);
printf("Introduce el segundo punto(y1): ");
scanf("%f",&y1);
printf("Introduce el primer punto(x2): ");
scanf("%f",&x2);
printf("Introduce el segundo punto(y2): ");
scanf("%f",&y2);
r1=x2-x1;
r2=y2-y1;
d=sqrt((r1*r1)+(r2*r2));
printf("La distancia es: %f\n",d);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 1.4----------------------------------------------
/*!
 *  \fn void unocuatro
 *  \brief Realiza el punto medio entre dos puntos del plano
 */
   /**
 @fn void unocuatro()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la recta, para poder obtener el punto medio entre dos puntos del plano.

 Descripcion: Esta funcion pide al usuario dos cordenadas, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la recta para el punto medio entre dos puntos del plano.   
 Observaciones: el programa solo acepta cuatro valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void unocuatro() 
{
float x1,y1,x2,y2,p1,p2;
char s;
printf("Seleccionaste punto medio entre dos puntos del plano \n");
do{
printf("Introduce el primer punto(x1): ");
scanf("%f",&x1);
printf("Introduce el segundo punto(y1): ");
scanf("%f",&y1);
printf("Introduce el primer punto(x2): ");
scanf("%f",&x2);
printf("Introduce el segundo punto(y2): ");
scanf("%f",&y2);
p1=(x1+x2)/2;
p2=(y1+y2)/2;
printf("El punto medio es: (%f,%f)\n",p1,p2);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 1.5----------------------------------------------
/*!
 *  \fn void unocinco
 *  \brief Realiza el area y perimetro de un triangulo 
 */
   /**
 @fn void unocinco()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la recta, para una area y perimetro de un triangulo.

 Descripcion: Esta funcion pide al usuario puntos, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la recta para el area y perimetro de un triangulo.   
 Observaciones: el programa solo acepta sies valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void unocinco() 
{
float x1,y1,x2,y2,x3,y3,r1,r2,d,e,f,p,a;
char s;
printf("Seleccionaste area y perimetro de un triangulo \n");
do{
printf("Introduce el primer punto(x1): ");
scanf("%f",&x1);
printf("Introduce el segundo punto(y1): ");
scanf("%f",&y1);
printf("Introduce el primer punto(x2): ");
scanf("%f",&x2);
printf("Introduce el segundo punto(y2): ");
scanf("%f",&y2);
printf("Introduce el primer punto(x3): ");
scanf("%f",&x3);
printf("Introduce el segundo punto(y3): ");
scanf("%f",&y3);
r1=x2-x1;
r2=y2-y1;
d=sqrt((r1*r1)+(r2*r2));
r1=x3-x1;
r2=y3-y1;
e=sqrt((r1*r1)+(r2*r2));
r1=x3-x2;
r2=y3-y2;
f=sqrt((r1*r1)+(r2*r2));
p=d+e+f;
printf("El perimetro es: %f\n",p);
a=(d*e)/2;
printf("El area es: %f\n",a);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 

//-----------------------------FUNCION MENU LINEA RECTA---------------------------------
/*!
 *  \fn void menulinearecta
 *  \brief Realiza la funcion de un menu de la linea recta
 */
 /**
 @fn void menulinearecta()
 @brief Esta funcion unicamente nos imprime el menu de operaciones que podemos hacer conforme a LINEA RECTA.                                                                                                                                                                                 
 */
void menulinearecta()
{
int opc;
do{
menulinearectat();
scanf("%d",&opc);
switch(opc)
{
case 1: unouno();
        break;
case 2: unodos();
        break;
case 3: unotres();
        break;
case 4: unocuatro();
        break;
case 5: unocinco();
        break;
case 6:break;
default: 
printf("Opcion invalida, intenta de nuevo \n\n");
break;
}
}while(opc!=6);        
}
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------LA CIRCUNFERENCIA----------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------FUNCION 2.1----------------------------------------------
/*!
 *  \fn void dosuno
 *  \brief Realiza la ecuacion de la circunferencia con centro en el origen y radio
 */
  /**
 @fn void dosuno()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la circunferencia con centro en el origen y radio.

 Descripcion: Esta funcion pide al usuario el radio, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la circunferencia con centro en el origen y radio.   
 Observaciones: el programa solo acepta un valor para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void dosuno() 
{
int r;
char s;
printf("Seleccionaste ecuacion de la circunferencia con centro en el origen y radio r \n");
do{
printf("Introduce el radio: ");
scanf("%d",&r);
r=r*r;
printf("La ecuacion es: X^2+Y^2=%d\n",r);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 2.2----------------------------------------------
/*!
 *  \fn void dosdos 
 *  \brief Realiza la ecuacion de la circunferencia con centro c y radio r
 */
 /**
 @fn void dosdos()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la circunferencia con centro y radio.

 Descripcion: Esta funcion pide al usuario el radio y el centro, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la circunferencia con centro y radio.   
 Observaciones: el programa solo acepta tres valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void dosdos() 
{
int x,y,r;
char s;
printf("Seleccionaste de la circunferencia con centro c y radio r \n");
do{
printf("Introduce el primer punto del centro(h): ");
scanf("%d",&x);
printf("Introduce el segundo punto del centro(k): ");
scanf("%d",&y);
printf("Introduce el radio(r): ");
scanf("%d",&r);
printf("La ecuacion es: (X-%d)^2+(Y-%d)^2=%d^2\n",x,y,r);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 2.3----------------------------------------------
/*!
 *  \fn void dostres
 *  \brief Realiza la ecuacion de la circunferencia con centro c y un punto
 */
 /**
 @fn void dostres()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la circunferencia con centro y un punto.

 Descripcion: Esta funcion pide al usuario el centro y un punto que vendrian siendo cuatro valores, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la circunferencia con centro y un punto.   
 Observaciones: el programa solo acepta cuatro valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void dostres() 
{
int x,y,h,k;
char s;
printf("Seleccionaste de la circunferencia con centro c y un punto p \n");
do{
printf("Introduce x del punto: ");
scanf("%d",&x);
printf("Introduce y del punto: ");
scanf("%d",&y);
printf("Introduce el primer punto del centro(h): ");
scanf("%d",&h);
printf("Introduce el segundo punto del centro(k): ");
scanf("%d",&k);
printf("La ecuacion es: (%d-%d)^2+(%d-%d)^2=r^2\n",x,h,y,k);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
}
//-----------------------------FUNCION 2.4----------------------------------------------
/*!
 *  \fn void doscuatro
 *  \brief Realiza la ecuacion de la circunferencia con p1 y p2 como extremos del diametro
 */
 /**
 @fn void doscuatro()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de la circunferencia con p1 y p2 como extremos del diametro.

 Descripcion: Esta funcion pide al usuario dos puntos, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de la circunferencia con p1 y p2 como extremos del diametro.   
 Observaciones: el programa solo acepta cuatro valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void doscuatro() 
{
float p1,p2,x1,y1,x2,y2,r1,r2,d;
char s;
printf("Seleccionaste ecuacion de la circunferencia con p1 y p2 como extremos del diametro \n");
do{
printf("Introduce el primer punto(x1): ");
scanf("%f",&x1);
printf("Introduce el segundo punto(y1): ");
scanf("%f",&y1);
printf("Introduce el primer punto(x2): ");
scanf("%f",&x2);
printf("Introduce el segundo punto(y2): ");
scanf("%f",&y2);
p1=(x1+x2)/2;
p2=(y1+y2)/2;
printf("El punto medio es: (%f,%f)por lo tanto este es el origen\n",p1,p2);
r1=x1-p1;
r2=y1-p2;
d=sqrt((r1*r1)+(r2*r2));
printf("El radio es: %f\n",d);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION MENU CIRCUNFERENCIA------------------------------

/*!
 *  \fn void menucircunferencia
 *  \brief Realiza la funcion de un menu de la circunferencia
 */
  /**
 @fn void menucircunferencia()
 @brief Esta funcion unicamente nos imprime el menu de operaciones que podemos hacer conforme a la CIRCUNFERENCIA.                                                                                                                                                                                 
 */
void menucircunferencia()
{
int opc;
do{
menucircunferenciat();
scanf("%d",&opc);
switch(opc)
{
case 1: dosuno();
        break;
case 2: dosdos();
        break;
case 3: dostres();
        break;
case 4: doscuatro();
        break;
case 5:break;
default: 
printf("Opcion invalida, intenta de nuevo \n\n");
break;
}
}while(opc!=5);        
}
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------Coordenadas polares--------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------FUNCION 3.1----------------------------------------------
/*!
 *  \fn void tresuno
 *  \brief Pasar un punto de coordenadas rectangulares a polares
 */
  /**
 @fn void tresuno()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de las cooordenadas polares a rectangulares.

 Descripcion: Esta funcion pide al usuario dos coordenadas, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de las coordenadas polares a rectangulares.   
 Observaciones: el programa solo acepta dos valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void tresuno() 
{
float x,y,a,l;
char s;
printf("Seleccionaste pasar un punto de coordenadas rectangulares a polares \n");
do{
printf("Introduce la coordenada en(x): ");
scanf("%f",&x);
printf("Introduce la coordenada en(y): ");
scanf("%f",&y);
l=sqrt((x*x)+(y*y));
a=atan(y/x);
printf("Las coordenadas polares son: (%f,%f)\n",l,a);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION 3.2----------------------------------------------
/*!
 *  \fn void tresdos
 *  \brief Pasar un punto de coordenadas polares a rectangulares
 */
  /**
 @fn void tresuno()
 @brief Esta funcion se creo unicamente para realizar la ecuacion de las cooordenadas rectangulares a polares.

 Descripcion: Esta funcion pide al usuario longitud y angulo, posteriormente el programa lo lee y las almacena
 en en la funcion; efectuara lo que se le pide y al final la funcion regresa el valor que se obtuvo en la 
 ecuacion de las coordenadas rectangulares a polares.   
 Observaciones: el programa solo acepta dos valores para poder realizar la ecuacion.                                                                                                                                                                                  
 */
void tresdos() 
{
float x,y,a,l;
char s;
printf("Seleccionaste pasar un punto de coordenadas polares a rectangulares \n");
do{
printf("Introduce la longitud: ");
scanf("%f",&l);
printf("Introduce el angulo: ");
scanf("%f",&a);
x=l*cos(a);
y=l*sin(a);
printf("Las coordenadas cartesianas son: (%f,%f)\n",x,y);
printf("Presiona s para salir, u otro numero punto para seguir\n");
scanf("%c",&s);
}while (s!='s');
} 
//-----------------------------FUNCION MENU COORDENADAS---------------------------------
/*!
 *  \fn void menucoordenadas
 *  \brief Realiza la funcion de un menu de coordenadas
 */
 /**
 @fn void menucoordenadas()
 @brief Esta funcion unicamente nos imprime el menu de COORDENADAS que podemos hacer su conversion.                                                                                                                                                                                 
 */
void menucoordenadas()
{
int opc;
do{
menucoordenadaspolarest();
scanf("%d",&opc);
switch(opc)
{
case 1: tresuno();
        break;
case 2: tresdos();
        break;
case 3:break;
default: 
printf("Opcion invalida, intenta de nuevo \n\n");
break;
}
}while(opc!=3);        
}
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
//-----------------------------FUNCION MENU GENERAL-------------------------------------
/*!
 *  \fn void menugeneral
 *  \brief Realiza la funcion de un menu general
 */
 /**
 @fn void menugeneral()
 @brief Esta funcion se creo unicamente para imprimirnos las opciones que tenemos de cada uno de los menus.

 Descripcion: Esta funcion pide al usuario que ingrese la opcion del menu, posteriormente el programa lo lee y las almacena
 en la funcion; efectuara lo que se le pide y al final la funcion nos lleva al menu, para poder elegir el menu que deseamos.  
 Observaciones: el programa solo acepta un opcion de menu.                                                                                                                                                                                  
 */
void menugeneral()
{
int opc;
do{
menut();
scanf("%d",&opc);
switch(opc)
{
case 1: menulinearecta();
        break;
case 2: menucircunferencia();
        break;
case 3: menucoordenadas();
        break;
case 4:break;
default: 
printf("Opcion invalida, intenta de nuevo \n\n");
break;
}
}while(opc!=4);
printf("Programa realizado por Hernandez Garcia, Garduño Castillo, De la Rosa Gutierrez, Ramirez Martinez");        
}
