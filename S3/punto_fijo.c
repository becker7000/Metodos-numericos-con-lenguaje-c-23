#include<stdio.h>
#include<math.h>

/*
    Método del punto fijo aplicado a la función:
    f(x) = 2*e^(x^2)-5x con valor inicial de x=0,
    con un máximo de iteraciones de 12 o hasta que 
    el error sea menor a 0.0005 (proporción) en porcentaje sería 0.05%.

    2*e^(x^2)-5x = 0
    2*e^(x^2) = 5x    
    (2*e^(x^2))/5 = x
    x = (2*e^(x^2))/5
    g(x) = x
    g(x) = (2*e^(x^2))/5
*/
float g(float x);


int main(){

    // Entradas:
    float x_anterior=0,x_aprox, error_aprox=0;
    int i;

    printf("\n\t Iter \t x anterior \t x aprox \t error aprox");
    for(i=1;i<=12;i++){
        x_aprox=g(x_anterior);
        error_aprox = (fabs(x_aprox-x_anterior)/x_aprox)*100;
        printf("\n\t %d \t %f \t %f \t %f",i,x_anterior,x_aprox,error_aprox);
        x_anterior=x_aprox;
        if(error_aprox<=0.05){
            break; // Interrumpe el ciclo y deja de iterar el método.
        }
    }

    printf("\n\n");

    return 0;
}

float g(float x){
    return (2*exp(pow(x,2)))/5;
}