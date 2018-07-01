#include "dijkstra.h"

/* Função que imprime a matriz de distâncias construída */
void imprime(int v_dist[], int destino){

    char indice[TAM_MAX] = {'U','V','X','W','Y','Z'};
    
    int i = 0;
    printf("\n            Vertice %c\n", indice[destino]);
    printf("Vertices                   Distancia\n");

    for (i = 0; i < TAM_MAX; i++){
        printf("   %c          -             [%d]\n", indice[i], v_dist[i]);
    }
}
 