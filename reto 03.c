/**************************************************************************************
 * Fecha: 26/08/2025
 * Autor: Santiago Bautista Velasquez
 * Materia: Sistemas Operativos
 * Tema: Reto 3
 * Objetivo: Corregir los errores del código base.
 *************************************************************************************/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    
int *ptr; // Se le asigna memoria dinamica a ptr

ptr = malloc(15 * sizeof(*ptr)); /* a block of 15 integers */

if (ptr != NULL) {
    
*(ptr + 5) = 480; /* assign 480 to sixth integer */

printf("Value of the 6h integer is %d\n", *(ptr + 5)); //Damos formato de tecto para poder imprimir lo que se tiene en la posicion ptr + 5

free(ptr);

}

return 0;

}


//Challenge 03!!!