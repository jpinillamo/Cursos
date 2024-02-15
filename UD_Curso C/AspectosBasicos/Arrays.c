#include <stdio.h>
#include <stdlib.h>

int main(){

    int edades[] = {23,25,26,28,21}; //También se pueden definir edades de numeros flotantes y caracteres
    //No se puede decir una lista de strings
    edades[2]=27;
    printf("%d",edades[2]);

    return 0;

}