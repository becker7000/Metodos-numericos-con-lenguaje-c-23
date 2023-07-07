#include<stdio.h>

const int N = 3;
#include "fun_mat.h"

int main(){

    // A(primera matriz de 3x3)
    // B (segunda matriz de 3x3)
    // R (matriz que guarda A*B)
    int  A[N][N], B[N][N], R[N][N];

    llenarMatriz(A);
    llenarMatriz(B);

    printf("\n\t MATRIZ A: ");
    imprimirMatriz(A);

    printf("\n\t MATRIZ B: ");
    imprimirMatriz(B);

    multiplicarMatrices(A,B,R);

    printf("\n\t MATRIZ RESULTADO: ");
    imprimirMatriz(R);

    return 0;
}

// Reforzar como multiplicar matrices de 3x3.
// Poner atención en el comportamiento de los indices.

