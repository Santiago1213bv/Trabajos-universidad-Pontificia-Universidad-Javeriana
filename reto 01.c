/*********************************************************************************************
 * Fecha: 26/08/2025
 * Autor: Satiago Bautista Velasquez
 * Materia: Sistemas Operativos
 * Tema: Reto 1
 * Objetivo: Corregir los errores del codigo base para asi poner a prueba la memoria dinamica.

**********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Autor: Santiago Bautista Velasquez


int main() {
   
char *p = malloc (100 * sizeof(char)) //Asignar memoria dinamica en un puntero p
char *q = malloc(100 * sizeof(char)); //Asignar memoria dinamica en un puntero q

printf("Address of p = %p\n", (void*)p); //Imprimir la direccion de memoria
  
strcpy(p, "Hello, I'm the best in Operating Systems!!!"); //guardar un texto en la variable p, con strcpy
printf("%s\n", p);

printf("About to copy \"Goodbye\" to q\n");
strcpy(q, "Goodbye");
printf("String copied\n");
printf("%s\n", q);

free(p); //Liberar la memoria dinamica reservada anteriormente en p
free(q); //Liberar la memoria dinamica reservada anteriormente en q

return 0;

}

//Challenge 01!!!