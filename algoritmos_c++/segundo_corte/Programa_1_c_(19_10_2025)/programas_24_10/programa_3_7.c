//Programa_1_7.c
// Brayan Stiven Ortiz Medina
// Programa "IF" (Estructura de seleccion)
// 24/10/2025
#include<stdio.h>
int main ()
{
        int a, b; // Definimos las variables como enteros
        printf("Ingrese a: "); // el usuario ingresa "a"
        scanf("%i",  &a); // el programa  reconoce a
        printf("Ingrese b: "); // el usuario ingresa "b"
        scanf("%i" , &b); // el programa reconoce b 
        if (a > b) // evalua si a > b
        {
                printf("\t a %d es mayor a b %d \n",a,b); //Si a > b imprime es>
        }
        else // hace un condicional de si  a>b es falso entonces realice otra acccion
	{
	printf("\t a  %d  menor que b %d \n",a,b); //Si a<b imprime este texto 
	}
return 0; 
}

