// Funciones de  salida dadas en pantalla
// programa_5.c
// Brayan Stiven Ortiz Medina
// Asignacion variables de datos
// 21/10/2025

#include <stdio.h>
int main()
{
	int enteroNumero;
	char caracterA = 65;
	double puntoFlotanteNumero;
	printf("Escriba un valor entero: ");
	scanf("%i", &enteroNumero);
	printf("Escriba un valor real: ");
	scanf("%lf", &puntoFlotanteNumero);
	printf("\nImprimiendo las variables \a\n");
	printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);
	printf("\t Valor de caracterA = %c \a\n", caracterA);
	printf("\t Valor de puntoFlotanteNumero = %lf \a\n",
	puntoFlotanteNumero);
	printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);
	printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);
	printf("\t Valor de puntoFlotanteNumero\n");
	printf("en notación científica = %e\n", puntoFlotanteNumero);
	return 0;
}
