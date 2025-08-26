/**************************************************************************************
 * Fecha: 26/08/2025
 * Autor: Santiago Bautista Velasquez
 * Materia: Sistemas Operativos
 * Tema: Reto 5
 * Objetivo: Corregir los errores del código base.
 *************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    
    int *ptr, i , n1, n2; //Creacion de variables y puntero
    
    printf("Enter size: ");
    scanf("%d", &n1);
    
    ptr = (int*) malloc(n1 * sizeof(int)); //Asignar la memoria dinamica 
    printf("Addresses of previously allocated memory: ");
    
    for(i = 0; i < n1; ++i){ //Bucle para imprimir la direccion de memoria de la size ingresada
    
    printf("\n\np = %p\n", ptr+i);
    printf("\n Enter the new size: ");
    scanf("%d", &n2);
    
    }
    
    // rellocating the memory
    ptr = realloc(ptr, n2 * sizeof(int)); //Asignar la memoria dinamica 
    printf("Addresses of newly allocated memory: "); 
    
    for(i = 0; i < n2; ++i){
    
    printf("\n\np = %p\n", ptr+i);
    
    }
    
    free(ptr); //Liberar la memoria
    return 0;
    
}

    
    

//Challenge 05!!!
