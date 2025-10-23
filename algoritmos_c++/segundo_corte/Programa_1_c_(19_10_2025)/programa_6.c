// Funciones de la salida de datos en pantalla
// programa_4.c
// Brayan Stiven Ortiz Medina
// 21/10/2025
#include <stdio.h>
int main()
{
short ocho, cinco, cuatro, tres, dos, uno; // Defininimos  seis variables de tipo short  
ocho = 8; 
cinco = 5;
cuatro = 4;
tres = 3;
dos = 2;
uno = 1;
// Se definieron las variables de los numeros  en el nombre de su variable
// En el printf "\n" hace el salto de linea
printf("Operadores aritméticos\n"); // Imprime el texto en pantalla 
printf("5 modulo 2 = %d\n",ocho%tres); // "5%2"me muestra el residuo de la divicion en este caso 1 
printf("Operadores lógicos\n");
printf("8 >> 2 = %d\n",ocho>>dos); // Se corre a la derecha dos veces en binario 
printf("8 << 1 = %d\n",cuatro<<1); // Se corre ala izquierda en binario el numero cuatro 
printf("5 & 4 = %d\n",cinco&2); // Se utliza el poerador and con los  numeros 4 y 1 
printf("3 | 2 = %d\n",tres|dos); // Se utiliza el operador OR en  los numeros 3 y 2
return 0;
}
 
