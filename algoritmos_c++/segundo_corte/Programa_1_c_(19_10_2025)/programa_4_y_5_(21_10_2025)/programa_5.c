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
    printf("Escriba un valor entero: ");  // Pedimos al usuario que ingrese un número entero.
    scanf("%i", &enteroNumero);  // Guardamos ese número'.

    printf("Escriba un valor real: ");  // Pedimos al usuario que ingrese un número con decimales.
    scanf("%lf", &puntoFlotanteNumero);  // Guardamos ese número en 'puntoFlotanteNumero'.

    printf("\nImprimiendo las variables \a\n");  // Imprimimos un mensaje y hacemos un sonido.
    
    printf("\t Valor de enteroNumero = %i \a\n", enteroNumero);  // Mostramos el valor del entero que el usuario metió.
    printf("\t Valor de caracterA = %c \a\n", caracterA);  // Mostramos el valor de 'A'.
    printf("\t Valor de puntoFlotanteNumero = %lf \a\n", puntoFlotanteNumero);  // Mostramos el número decimal que el usuario metió.

    printf("\t Valor de enteroNumero en base 16 = %x \a\n", enteroNumero);  // Mostramos el número entero en formato hexadecimal.
    printf("\t Valor de caracterA en código hexadecimal = %x\n", caracterA);  // Mostramos el valor de 'A' en hexadecimal.

    printf("\t Valor de puntoFlotanteNumero\n");  // Solo imprimimos un mensaje.
    printf("en notación científica = %e\n", puntoFlotanteNumero);  // Mostramos el número decimal en formato de notación científica.

    return 0; 
}
