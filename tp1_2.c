#include <stdio.h>

//4.a
int cuadrado(int num);
//4.b
void cuadrado2(int *num);
//4.c
void direccion(int *num);
//4.d
void invertir(int *num1, int *num2);
//4.e
void orden(int *num1, int *num2);

int main(){
    int aux, num, *pnum = &num;
    printf("Ingrese un numero entero: ");
    fflush(stdin);
    scanf("%d", pnum);
    //Utilizo la primera funcion de cuadrado
    aux = cuadrado(num);
    printf("Su cuadrado es(1ra funcion): %d\n", aux);
    //Utilizo la segunda funcion de cuadrado
    cuadrado2(pnum);
    printf("Su cuadrado es(2da funcion): %d\n", *pnum);
    //Utilizo la funcion direccion
    printf("--Direccion y contenido--\n");
    direccion(pnum);
    //Utilizo la funcion invertir
    int num2, num3;
    printf("Ingresa dos numeros enteros: ");
    fflush(stdin);
    scanf("%d %d", &num2, &num3);
    invertir(&num2, &num3);
    //Muestro los numeros invertidos
    printf("--Numeros invertidos--\nNumero 1: %d\n", num2);
    printf("Numero 2: %d\n", num3);
    //Ordeno los numeros
    orden(&num2, &num3);
    //Muestro los numeros ordenados
    printf("--Numeros ordenados--\n");
    printf("Menor: %d\n", num2);
    printf("Mayor: %d\n", num3);

    return 0;
}

int cuadrado(int num){
    int aux;
    aux = num*num;
    return aux;
}

void cuadrado2(int *num){
    *num *= *num;
}

void direccion(int *num){
    printf("Direccion de la variable: %p\n", num);
    printf("Contenido de la variable: %d\n", *num);
}

void invertir(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void orden(int *num1, int *num2){
    int aux = *num1;
    if(*num2 < *num1){
        *num1 = *num2;
        *num2 = aux;
    }
}