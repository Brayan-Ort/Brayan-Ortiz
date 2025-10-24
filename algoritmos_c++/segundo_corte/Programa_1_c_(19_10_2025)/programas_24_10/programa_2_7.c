// Estructura de control
// programa_2_7.c
// Brayan Stiven Ortiz Medina
// 24/10/2025
#include <stdio.h>
int main()
{
	if (0) //nada dentro de esta accion se va a ejecutar ya que el cero en booleano siempre es falso 
	{
		printf("Esta instrucción nunca se ejecuta\n"); //este texto no se va a mostrar
		printf("porque la condición siempre es falsa (0).\n"); // este texto no se mostrara 
	}
	if (9.5674)  // todo dentro de esta accion siempre se va ejecutar ya que que cualquier numero diferente de 0 dentro del if siempre se ejecuta

	{
	printf("Esta instrucción siempre se ejecuta.\n");
	}
return 0;
}
