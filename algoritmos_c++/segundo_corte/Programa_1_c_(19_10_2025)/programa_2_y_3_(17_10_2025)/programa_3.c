// Funciones de  salida dadas en pantalla
//programa_2.c
// Brayan Stiven Ortiz Medina
// Asignacion variables de datos
// 17/10/2025

#include <stdio.h>
int main() {
        short numero1  = 115;
        signed int numero2 = 41055;
        unsigned long numero3 = 100148;
        char caracterA = 65;
        char caracterB = 'B';
        float numero4 = 89.68;
        double numero5 = 238.2236;
	printf("Entero 1: %d\n", numero1);
	printf("Entero2: %d\n", numero2);
	printf("Entero3: %ld\n", numero3);
	printf("caracterA: %c\n", caracterA);
	printf(" caracterB: %c\n", caracterB);
	printf("float Numero4: %f\n", numero4);
	//printf("float Numero4 con precisión: %5.2f\n", numero4);
	printf("double Numero5: %f\n", numero5);
	//printf("double numero5 con precisión: %5.2f\n", numero5);
	printf("caracterA como entero: %d\n", caracterA);
	printf("caracterB como entero: %d\n", caracterB);
return 0;
}
             
