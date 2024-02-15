#include <stdio.h>
#include <stdlib.h>

//La esctructura permite guardar varios tipos de datos, se tiene que definir afuera del main
struct  alumnos {
       char nombre[30];
       int edad;
       double nota;
};

int main(){
    struct alumnos alumno1;
    alumno1.edad = 21;
    alumno1.nota = 7.2;
    strcpy(alumno1.nombre, "Juan"); //Esta función sirve para editar strings dentro de una variable

    struct alumnos alumno2;
    alumno2.edad = 22;
    alumno2.nota = 10.0;
    strcpy(alumno2.nombre, "Pedro"); 

    struct alumnos alumno3;
    alumno3.edad = 19;
    alumno3.nota = 5.5;
    strcpy(alumno3.nombre, "Sapo"); 

    printf("Nombre: %s\nEdad: %d\nNota: %.1f\n",alumno1.nombre,alumno1.edad,alumno1.nota); 
    printf("Nombre: %s\nEdad: %d\nNota: %.1f\n",alumno2.nombre,alumno2.edad,alumno2.nota);

    return 0;

}