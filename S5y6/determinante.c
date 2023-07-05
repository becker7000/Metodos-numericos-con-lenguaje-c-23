#include<stdio.h>

const int N=3;
#include "fun_mat.h"

int main(){

    int mat[N][N];
    llenarMatriz(mat);
    imprimirMatriz(mat);
    mostrarTranspuesta(mat);

    int determinante = calcularDeterminante(mat);
    printf("\n\n\t La determinante de la matriz es: %d",determinante);

    printf("\n\n");
    return 0;
}
