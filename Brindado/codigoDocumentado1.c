/**
 @file division.c
 @brief Este es el codigo fuente de la funcion ir_division()

    En este codigo fuente solo se tiene la definicion de la funcion ir_division() que se usa en el codigo fuente principal de la calculadora
 @author Cruz Lopez Raziel Adan & Jacinto Enriquez Emmanuel
 @version 1.0
 @date Octubre 2012
 */
#include <stdio.h>

/**
 @var double a_division
 @brief Variable llamada a_division, de tipo flotante de doble precision, que se encargara de almacenar el valor del dividendo
 */
double a_division;

/**
 @var double b_division
 @brief Variable llamada b_division, de tipo flotante de doble precision, que se encargara de almacenar el valor del divisor
 */
double b_division;

/**
 @var double total_division
 @brief Variable llamada total_division, de tipo flotante de doble precision, que se encargara de almacenar el valor del resultado de la operacion division
 */
double total_division;

/**
 @fn void ir_division()
 @brief Esta funcion se creo unicamente para realizar la operacion division

 Descripcion: esta funcion primero solicita al usuario el valor que representa al dividendo en la operacion, inmediatamente despues se lee el valor del divisor, luego verifica que se pueda efectuar la division y de ser viable la operacion, la realiza.\n
 Entrada: soporta numeros reales, primero se solicita al usuario el dividendo y despues el divisor.\n
 Salida: la funcion por si misma muestra el resultado de la operacion division en la pantalla.\n
 Obervaciones: este programa solo acepta 2 numeros, el dividendo y el divisor respectivamente.\n
 */
void ir_division()
{
    ///Proceso de ejecucion\n\n
    ///Lectura del dividendo de la operacion
	printf("Ingrese el dividendo\n");
	scanf("%lf",&a_division);

    ///Lectura del divisor de la operacion
	printf("Ingrese el divisor\n");
	scanf("%lf",&b_division);

    ///Comprobacion de la NO ejecucion de division por cero
    if(b_division!=0)
    {
        ///Si es posible se efectua la division
        total_division=a_division/b_division;
        printf("El valor de la division es:: %.8lf\n", total_division);
    }

    else
    {
        ///Si no es posible se evita la division por cero y se imprime un mensaje de error
        printf("NO se puede efectuar la division\n");
    }
}
