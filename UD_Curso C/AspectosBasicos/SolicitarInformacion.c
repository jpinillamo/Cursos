#include <stdio.h>
#include <stdlib.h>

int main(){

    /* int edad;
    printf("Introduce tu edad\n");
    scanf("%d", &edad); //sirve para pedir informacion al usuario  -- Para trabajar con flotantes en esta función se utiliza %lf
    //Para trabajar con letra %c y con caracteres %d
    printf("Tienes %d años",edad);*/

    /*char nombre[15]; //Se tiene que definir la cantidad de ccaracteres que puede guardar una variable anterior a utilizarla. 
    printf("Introduce tu nombre\n");
    scanf("%s", nombre); // se utiliza %s para trabajar con nombres5
    printf("Tu nombre es %s",nombre); */

    //La función f titne u problema con los espacios entonces lo que se hace es utilizar la función fgets

    char nombre[15]; //Se tiene que definir la cantidad de ccaracteres que puede guardar una variable anterior a utilizarla. 
    printf("Introduce tu nombre\n");
    fgets(nombre,15,stdin); // Recibe el nombre de la variable, la cantidad de caracteres y al final un standar input
    //Tener cuidado con porque el enter de salir de la terminal nos bota un enter en el guardado de vairabel. 
    printf("Tu nombre es %s",nombre); 

    return 0;

}