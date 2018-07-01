#include "dijkstra.h"

int write(FILE *file, int grafico[][TAM_MAX]){ /* Funcao escreve na matriz apenas numero inteiros (fscanf nao pega espaço ou \n)*/

	int i, j;
	if(file != NULL){
		for(i = 0; i < TAM_MAX; i++){ /* escreve na matrix */
			for(j = 0; j < TAM_MAX; j++){ 
				fscanf(file, "%d", &grafico[i][j]);
			}
		}
		return grafico[TAM_MAX][TAM_MAX];
	}else{
		return 0;
	}
}
