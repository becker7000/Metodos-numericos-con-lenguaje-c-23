
// Función para llenar una matriz:
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

// Función para imprimir una matriz:
void imprimirMatriz(int matriz[N][N]){

    int i,j;
    for(i=0;i<N;i++){
        printf("\n\n");
        for(j=0;j<N;j++){
           printf("\t  %d",matriz[i][j]);
        }
    }

}

// Función para calcular el determinante de una matriz de 3x3: 
int calcularDeterminante(int m[N][N]){

    int determinante=0;

    determinante += m[0][0]*(m[1][1]*m[2][2]-m[2][2]*m[1][2]);
    determinante -= m[0][1]*(m[1][0]*m[2][2]-m[2][0]*m[1][2]);
    determinante += m[0][2]*(m[1][0]*m[2][1]-m[2][0]*m[1][1]); 

    return determinante;

}

// Función para generar la transpuesta de una matriz de 3x3:
void mostrarTranspuesta(int m[N][N]){
    int i,j;
    printf("\n\t Transpuesta de la matriz M: ");
    for(i=0;i<N;i++){
        printf("\n\n");
        for(j=0;j<N;j++){
           printf("\t  %d",m[j][i]);
        }
    }
}

// Función que multiplica 2 matrices de 3x3.
void multiplicarMatrices(int A[N][N],int B[N][N],int R[N][N]){

    // Algoritmo de la multiplicación:
    int i,j,k,suma=0;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            suma=0;
            for(k=0;k<N;k++){
                suma+=(A[i][k]*B[k][j]);
            }
            R[i][j]=suma;
        }
    }

}