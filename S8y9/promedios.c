#include<stdio.h>

/*
    Ejercicio: crear una calculadora que reciba una cantidad de salarios: N (fija).

    Entonces podrá ordenar los salarios del más pequeño al más grande y viceversa.

    También podrá calcular algunos promedios: 
    > Un promedio es un dato representativo de un conjunto de datos.
    1. Media aritmetica.
    2. Mediana (nos pide que el conjunto esté ordenado)
    3. Moda (Tarea)

*/

void llenar(float* salarios, int N);
void imprimir(float* salarios, int N);
void ordernarPorMetodoBurbuja(float* salarios, int N);
void intercambiar(float* a, float* b);
void mediaAritmetica(float* salarios, int N);
void mediana(float* salarios, int N);

int main(){

    const int N = 5; // 5 salarios en total.
    float salarios[N];

    llenar(salarios,N);
    imprimir(salarios,N);
    ordernarPorMetodoBurbuja(salarios,N);
    imprimir(salarios,N);
    mediaAritmetica(salarios,N);
    mediana(salarios,N); // El arreglo ya debe estar ordenado.

    return 0;
}

void llenar(float* salarios, int N){
    // register mejoraba el performace la aplicación.
    register int i; // register: le sugiere al compilador guardar una variable como registro
    printf("\n\t Escribe %d salarios: \n",N);
    for(i=0;i<N;i++){
        printf("\t Salario #%d: $",i+1);
        scanf("%f",(salarios+i)); // & -> dame tu dirección
    }
}

void imprimir(float* salarios, int N){
    int i;
    printf("\n\n\t Lista de salarios: ");
    for(i=0;i<N;i++){
        printf("\n\t Salario #%d: $%.2f",i+1,*(salarios+i)); // * -> dame tu valor (contenido)
    }
}

void ordernarPorMetodoBurbuja(float* salarios, int N){
    
    int i, j; // i <- comparaciones y j <- la posición del elemento izquierdo 

    for(i=(N-1);i>0;i--){ // i empieza en el tamaño del arreglo menos uno.
        for(j=0;j<i;j++){
            if(*(salarios+j)>*(salarios+j+1)){ // Orden ascendente
                intercambiar((salarios+j),(salarios+j+1));
            } // Para ordenar de forma descentente sólo hay que cambiar > por <
        }
    }

}

void intercambiar(float* a, float* b){
    float auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

void mediaAritmetica(float* salarios, int N){

    float suma=0, promedio;
    int i;

    for(i=0;i<N;i++){
        suma+=*(salarios+i);
    }

    promedio=suma/N;
    printf("\n\n\t El promedio de los salarios es: $%.2f ",promedio);

}

void mediana(float* salarios, int N){

    float mediana;

    if(N%2==1){ // Caso 1: N(tamaño) es impar
        mediana = *(salarios+N/2);
    }

    if(N%2==0){ // Caso 2: N(tamaño) es par
        mediana = *(salarios+N/2-1) + *(salarios+N/2);
        mediana /= 2;
    }

    printf("\n\n\t La mediana es: $%.2f",mediana);

}

/*
    Scope, alcance o ámbito:
    es el nivel de reconocimiento que tiene una variable
    puede ser local, global o híbrido.

*/

/*
    Existen mucho algoritmos de ordenamiento:
    Algunos son directos y otros indirectos.
    Directos: burbuja, selección y inserción.
    Indirectos: rápido y mezcla.

    Algoritmo de ordenamiento por el método de la burbuja:

    int arreglo [] = {5, 4, 7, 3, 6} <- Elementos: 5 (comparaciones = elementos - 1)

    5, 4, 7, 3, 6

    PASADA #0: comparaciones: 4
    4, 5, 7, 3, 6
    4, 5, 7, 3, 6
    4, 5, 3, 7, 6
    4, 5, 3, 6, 7   <- el 7 ya está ordenado

    PASADA #1: comparaciones: 3
    4, 5, 3, 6, 7
    4, 3, 5, 6, 7
    4, 3, 5, 6, 7   <- el 6 ya está ordenado

    PASADA #2: comparaciones: 2 (cuando #pasadas = #comparaciones ahí va a terminar de ordenar)
    3, 4, 5, 6, 7
    3, 4, 5, 6, 7 <- ahora ya todo está ordenado.

*/