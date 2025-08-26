/**************************************************************************************
 * Fecha: 26/08/2025
 * Autor: Santiago Bautista Velasquez
 * Materia: Sistemas Operativos
 * Tema: Reto 4
 * Objetivo: Corregir los errores del código base.
 *************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    int n, i, *ptr, sum = 0; //Declaracion de variables 
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*) calloc(n, sizeof(int)); //Asignar el espacio de la memoria dinamica
    
    if(ptr == NULL) {   //Comprobar que el apuntador no sea igual a NULL          
        printf("Error! memory not allocated."); 
        exit(0);
    }
    
      
    for(i = 0; i < n; ++i) { //bucle para el ingreso de datos 
        
        printf("Enter elements: ");
        
        scanf("%d", ptr + i);
    
        sum += *(ptr + i); //Suma de los valores ingresados
    
    }
    
    printf("Sum = %d", sum); //Imprimir el resultado de la suma
    
    free(ptr); //Libererar la memoria 
    
    return 0;
    
    }

//Challenge 04!!!
