#include <stdio.h>
#include <stdlib.h>

int main(){

    double numero= 10.1234567890;
    printf("Mi numero es $d\n",10); //Con esto se definen números
    printf("Mi %s es $d\n","numero",10); //%s hace referencia a string
    
    printf("Mi numero es %.12f",numero);
    return 0;

}