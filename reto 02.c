/**************************************************************************************
 * Fecha: 26/08/2025
 * Autor: Santiago Bautista Velasquez
 * Materia: Sistemas Operativos
 * Tema: Reto 2
 * Objetivo: Corregir los errores del código base.
 *************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
   
char *q = NULL; //Inicializar un espacio de memoria en NULL

printf("Requesting space for \"Goodbye\" \n");

q = malloc(strlen("Goodbye")+1); //Almecena la suficiente cantidad de caracteres para que se pueda guarda en la varibanle

if (!q) { //Condicion para comprobar que el espacio reservado sea correcto
    
    perror("Failed to allocate space because");
    exit(1);

}

printf("About to copy \"Goodbye\" to q at address %p \n", (void*)q);

strcpy(q, "Goodbye"); //Copiar la palarabra "Goodbye en q"
printf("String copied\n");
printf("%s \n", q); //Imprimir para verificar que se halla copiado correctamente.

free(q); //Liberar la memoria reservada

return 0;
}

//Challenge 02!!!