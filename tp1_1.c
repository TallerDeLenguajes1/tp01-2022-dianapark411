#include <stdio.h>

int main(){

    printf("Hola mundo \n");

    int *punt;
    int num;

    printf("Ingrese un numero: \n");
    scanf("%i", &num);

    punt = &num;

    printf("El contenido del puntero es: %i \n", punt);
    printf("Lo apuntado por el puntero: %i \n", *punt);
    printf("La direccion de memoria de la variable: %i \n", &num);
    printf("La direccion de memoria del puntero: %i \n", &punt);
    printf("El tamanio de memoria utilizado por la variable: %i \n", sizeof(num));

}