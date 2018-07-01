
/* @author: Adler, Náthaly
   Disciplina: Redes
   Algoritmo de roteamento - Dijkstra.
*/

#include "dijkstra.h"

int main(int argc, char *argv[]){

	int grafico[TAM_MAX][TAM_MAX]; /* declarando matriz para receber do arquivo */
	
    /* funcao leitura pega nome do arquivo na linha de comando pos 1 read(nome arquivo) e retorna um arquivo do tipo FILE */
  	grafico[TAM_MAX][TAM_MAX] = write(read(argv[1]), grafico);  /* padda metodo de leitura que retorna um arquivo tipo FILE, que é parametro da funcao write */
  	/* Matriz recebe o metodo que escreve nela, este metodo retorna uma matriz*/
  	int i;
  	for(i = 0; i < TAM_MAX; i++){ /* Chamado funcao de roteamento para todas as vertices*/
		dijkstra(grafico, i);
	}
	
    return 0;
}