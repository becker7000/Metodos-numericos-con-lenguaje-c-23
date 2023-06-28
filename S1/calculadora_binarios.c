#include<stdio.h>

int main(){

    int decimal;
    int i=0;
    int binario[32]; // Arreglo de 32 números enteros.
    printf("\n\t Escribe un numero en decimal: ");
    scanf("%d",&decimal);

    // Generando el binario al réves:
    printf("\n\t El numero %d en binario es: ",decimal);
    while(decimal>0){
        binario[i]=decimal%2;
        decimal/=2; 
        i++;
    }

    // Imprimiendo el binario:
    int j;
    for(j=i-1;j>=0;j--){
        printf(" %d",binario[j]);
    }

    return 0;
}

/*
    Tarea: escribir un programa con un algoritmo iterativo
    que pida un número en binario y lo transforme a decimal.
*/