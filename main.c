/* Guia 0,  Ej 8
 * A través de una función que reciba por referencia un número entero, calcular el
cubo de dicho número y mostrarlo en el bloque principal de ejecución del
programa. */

#include<stdio.h>
int cube(int *);

int main(){
    int num, *numptr, numcube;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    numptr = &num;
    numcube = cube(numptr);
    printf("El numero %d elevado al cubo es %d", num, numcube);

    return 0;
}

int cube(int *numptr){
    return *numptr * *numptr * *numptr;
}