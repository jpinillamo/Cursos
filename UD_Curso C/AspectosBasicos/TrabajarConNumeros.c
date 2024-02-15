#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("%f \n", 5*2.3); //Numeros flotantes
    printf("%d \n", 5*3); //Numeros enteros
    //Se debe colocar los decimales si se sabe que el resultado va a ser decimal

    printf("%f \n",pow(2,5.5));//función potencia --> Primero va la base y despues a lo que va a elevarse
    printf("%f \n",sqrt(2));//Función raiz
    printf("%f \n",round(2.75));//Redondea al entero mas cercano
    printf("%f \n",ceil(2.75));//Redondea al entero de arriba
    printf("%f \n",floor(2.75));//Redondea al entero de abajo
    return 0;

}
