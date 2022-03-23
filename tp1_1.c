#include <stdio.h>

int main(){

    printf("Hola mundo\n");

    int num, *punt; 
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    punt = &num;

    printf("\nEl contenido del puntero es: %i", punt);
    printf("\nEl contenido apuntado por el puntero es: %i", *punt);
    // printf("\nLa direccion de memoria almacenada por el puntero es: %i", punt);
    printf("\nLa direccion de memoria de la variable es: %i", &num);
    printf("\nLa direccion de memoria del puntero es: %i", &punt);
    printf("\nEl tamanio de la memoria utilizada por la variable es: %i", sizeof(num));

    return 0;
}