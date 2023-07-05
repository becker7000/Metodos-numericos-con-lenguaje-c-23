#include<stdio.h>
#include<stdlib.h>

const int N=3; // Constante declarada.

void llenarMatriz(int matriz[N][N]);
void imprimirMatriz(int matriz[N][N]);
void multiplicarPorEscalar(int matriz[N][N],int escalar);

int main(){

    int matriz[N][N];
    llenarMatriz(matriz);
    imprimirMatriz(matriz);
    multiplicarPorEscalar(matriz,5);
    imprimirMatriz(matriz);
    
    printf("\n\n");
    return 0;
}

void llenarMatriz(int matriz[N][N]){

    int i,j;
    printf("\n\t Ingresa los elementos de la matriz M de 3x3 \n");
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("\t M[%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

}

void imprimirMatriz(int matriz[N][N]){

    int i,j;
    printf("\n\n\t Matriz M de 3x3 ingresada \n");

    for(i=0;i<N;i++){
        printf("\n\n");
        for(j=0;j<N;j++){
           printf("\t  %d",matriz[i][j]);
        }
    }

}

void multiplicarPorEscalar(int matriz[N][N], int escalar){

    int i,j;
    printf("\n\n\t Multiplicando la matriz por %d \n",escalar);

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
           matriz[i][j]*=escalar;
        }
    }

}

// Tarea: crear la función 'sumarMatrices'.