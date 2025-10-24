//programa_3_7_version_2.c
// Brayan Stiven Ortiz Medina
// Condicional if y else 
// 24/10/2025

#include <stdio.h>
int main()
{
	int a;
	printf("Ingrese un número: "); //el usuario ingresa un numero entero 
	scanf("%d",&a); //el programa lee el numero
	if ( a%2 == 0 ) // el programa divide a entre 2 y si el residuo es 0  dice que el numero es par 
	{
	printf("El número %d es par.\n",a);
	}
	else // si el residuo de la divion entre a y 2 es diferente  de 0 el programa dice que es impar 
	{
	printf("El número %d es impar.\n",a);
	}
return 0;
}
