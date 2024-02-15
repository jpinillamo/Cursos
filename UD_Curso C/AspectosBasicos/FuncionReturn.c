#include <stdio.h>
#include <stdlib.h>

float cubo(float numero){
    float resultado = pow(numero,3);
    return resultado;
}

int main(){

    printf("%.1f",cubo(2));
    return 0;

}
//Si se define la función debajo no va a funcionar