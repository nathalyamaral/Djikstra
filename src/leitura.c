#include "dijkstra.h"

FILE *read(char *nome){ /* Funcao lê arquivo receve parametro o nome */
	
	FILE *file = fopen(nome, "r");

	if (file == NULL){ 
		printf("Erro nao abriu aqruivo\n");
		return NULL;
	}else{
		printf("Aberto com sucesso\n");
		return file;
	}
}

