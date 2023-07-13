#include<stdio.h>

#define N 3

// Este método recibe la matriz aumentada.
void eliminacionGaussiana(float m[N][N+1]); // matriz de 3 x 4
void sustitucionReversa(float m[N][N+1],float s[N]);
void imprimirSolucion(float s[N]);

int main(){

    // Llenando la matriz aumentada de forma manual:
    // TODO:
    //      fun1: 
    //      implementar que el usuario pueda elegir 
    //      el tamaño del sistema de ecuaciones siempre y cuando sea
    //      cuadrada: 3x3, 4x4, 5x5
    //      fun2:
    //      tambien implementar que se pueda llenar la matriz desde 
    //      la consola
    //      fun3: 
    //      imprimir la matriz.
    float m[N][N+1]={
        {2,1,-1,8},
        {-3,-1,2,-11},
        {-2,1,2,-3},
    };

    float s[N];

    eliminacionGaussiana(m);
    sustitucionReversa(m,s);
    imprimirSolucion(s);

    return 0;
}

// Esta función nos entrega la matriz triangular superior.
void eliminacionGaussiana(float m[N][N+1]){
    int i,j,k;
    float factor;
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            factor = m[j][i]/m[i][i];
            for(k=0;k<N+1;k++){
                m[j][k] -= factor*m[i][k];
            }
        }
    }
}

void sustitucionReversa(float m[N][N+1],float s[N]){
    int i,j;
    for(i=N-1;i>=0;i--){
        s[i]=m[i][N];
        for(j=i+1;j<N;j++){
            s[i] -= m[i][j]*s[j];
        }
        s[i] /= m[i][i]; // Nos ayuda a encontrar la solución con el verdadero signo y verdadero valor
    }
}

void imprimirSolucion(float s[N]){
    int i;
    printf("\n\t Soluciones del sistema de ecuaciones: ");
    for(i=0;i<N;i++){
        printf("\n\t x%d = %.2f",i,s[i]);
    }
}