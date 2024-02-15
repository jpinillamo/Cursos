#include <stdio.h>
#include <stdlib.h>

int main(){

    char nom[]= "JUAN";
    int ed =23;
    holamundo(nom,ed);
    return 0;

}
//void significa función que no tendra respuesta
void holamundo(char nombre[],int edad) 
{

    printf("Hola %s!, tienes %d años \n", nombre,edad);
}