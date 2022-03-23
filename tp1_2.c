#include <stdio.h>

int CalcularCuadrado(int x);
void CalcularCuadradoV2(int *x);
void MostrarVariable(int x);
void Invertir(int *a, int *b);
void Orden(int *a, int *b);

int main(){
    int num, cuadrado, num2;

    printf("\nIngrese un numero: ");
    scanf("%i", &num);
    
    cuadrado = CalcularCuadrado(num);
    printf("\nEl cuadrado del numero ingresado es: %i", cuadrado);

    printf("\n\nIngrese otro numero:");
    scanf("%i", &num2);

    CalcularCuadradoV2(&num2);
    printf("\nEl cuadrado del numero ingresado es: %i", num2);

    MostrarVariable(num);

    //para las funciones invertir y orden declaro otras variables

    int a, b;

    printf("\n\nIngrese el primer numero(a): ");
    scanf("%i", &a);
    printf("\nIngrese el segundo numero(b): ");
    scanf("%i", &b);

    Invertir(&a, &b);
    printf("\nLas variables a y b luego de invertirlas son: a = %i y b = %i", a, b);

    Orden(&a, &b);
    printf("\nLas variables a y b luego de ordenarlas (a = menor valor y b = mayor valor) son: a = %i y b = %i \n", a, b);

    return 0;
}

int CalcularCuadrado(int x){
    int resultado;

    resultado = x*x;

    return resultado;
}

void CalcularCuadradoV2(int *x){
    *x = (*x) * (*x);
}

void MostrarVariable(int x){
    printf("\n\nEl contenido de la primera variable es: %i", x);
    printf("\nLa direccion de la primera variable es: %i", &x);
}

void Invertir(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;
}

void Orden(int *a, int *b){
    if (*a > *b) {
        Invertir(a,b);
    }
}