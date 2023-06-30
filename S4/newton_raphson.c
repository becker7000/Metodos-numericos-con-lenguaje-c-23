#include<stdio.h>
#include<math.h>

float f(float x);
float df_dx(float x);

int main(){

    // Entradas: 
    int i, iter_max;
    // x_inicial (es la estimación inicial de una raíz)
    // fx (la función evaluada en x)
    // derivada_fx (la derivada evaluada en x)
    float x_inicial, fx, derivada_fx;

    printf("\n\t Cuantas iteraciones maximas: ");
    scanf("%d",&iter_max); // Iter: 8

    printf("\n\t Dame el valor inicial de x: "); 
    scanf("%f",&x_inicial); // x inicial: 3

    // Algoritmo iterativo (Control):
    printf("\n\t Iter \t f(x) \t f'(x) \t x aprox");
    for(i=0;i<iter_max;i++){
        fx = f(x_inicial);
        derivada_fx = df_dx(x_inicial);

        // Formula de Newton - Raphson para aproximar la raíz (Cálculo).
        x_inicial = x_inicial - fx/derivada_fx;

        // Salidas: 
        printf("\n\t %d  \t %f \t %f \t %f",i,fx,derivada_fx,x_inicial);

    }

    printf("\n\n");

    return 0;
}

float f(float x){
    return 2*sin(x)-x;
}

float df_dx(float x){
    return 2*cos(x)-1;
}