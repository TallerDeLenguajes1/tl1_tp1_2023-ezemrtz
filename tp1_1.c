#include <stdio.h>

int main(){
    printf("Hola mundo\n");
    int *pnum , num = 15;
    pnum = &num;
    printf("Contenido del puntero: %d\n", *pnum);
    printf("Direccion de memoria almacendada por el puntero: %d\n", pnum);
    printf("Direccion de memoria de la variable: %d\n", &num);
    printf("Direccion de memoria del puntero: %d\n", &pnum);
    printf("Tamanio de memoria de la variable: %d Bytes\n", sizeof(*pnum));

    
    return 0;
}