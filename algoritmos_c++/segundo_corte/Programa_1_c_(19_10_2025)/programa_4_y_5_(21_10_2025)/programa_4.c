// Funciones de la salida de datos en pantalla
// programa_4.c
// Brayan Stiven Ortiz Medina
// 21/10/2025
#include <stdio.h>
int main()
{
	int n_entero;
	float n_float;
	printf("Ingresa un valor entero: ");
	scanf("%i", &n_entero);
	printf("El valor ingresado es: %d\v",n_entero);
	printf("Ingresa un valor float: ");
	scanf("%f", &n_float);
        printf("El valor ingresado es: %f\v", n_float);
return 0;
}
// el comando "\r" no realiza esa accion es decir no muestra en la pantalla el comando printf
// el comando "\a" suena una alerta (notificacion) al ejecutarse
// el comando "\t" tabula la siguiente linea  al ejecutarse 
// el comando "\b" no muetra el ultmo caracter del programa 
// el comando "\f" lo envia a la siguiente lina donde termina el  comando anterior
// el comando "\0" Aparece una alerta de error
// el comando "\v" hace lo mismo que  el comando "\t"
