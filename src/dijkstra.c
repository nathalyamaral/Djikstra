
#include "dijkstra.h"

/* Função que implementa o algoritmo de caminho mais curto da origem.
   Um gráfico é usado representado por um arquivo de entrea que é uma matriz de adjacêntes */
void dijkstra(int grafico[][TAM_MAX], int destino){

    int v_dist[TAM_MAX];     /* O array de saída. dist[i](vetor de distncia) vai armazenar o caminho mais curto
                         distancia de x(um vertice) ate i(seus adjacentes) */
  
    int conj_cam_curto[TAM_MAX]; /* conj_cam_curto[i] será verdadeiro se a vértice i for incluído como menor (shortest path tree, conjunto de árvores de caminhos mais curtos)
                       árvore de caminho ou menor distância de x para i é finalizado 
                       inicialmente vazio e as distâncias atribuídas aos vértices são {0, infinito, infinito, infinito, infinito, infinito, infinito, infinito}*/
  
    /* Inicialize todas as distâncias como INFINITA (pois não sabemos) e stpSet[] como falso */
    int i = 0;
    for (i = 0; i < TAM_MAX; i++){
    	v_dist[i] = INT_MAX, conj_cam_curto[i] = 0;
    }
  
    /* Distância da vértice de si mesma é sempre 0 (de X a X) */
    v_dist[destino] = 0;
  
    /* Precisamos encontrar o caminho mais curto para todas as vértices */
    int count = 0;
    for (count = 0; count < TAM_MAX-1; count++){
       /* Escolha o vértice que tem distância mínima do conjunto de vértices não
       ainda processado. u é sempre igual a src na primeira iteração. */
       int u = min(v_dist, conj_cam_curto);
  
       /* Marque a vértice escolhida como processado(calculado) */
       conj_cam_curto[u] = 1;
  
       /* Atualize o valor do vetor de distancia (dist[]) das vértices adjacentes da vértice escolhida. */
       int v_aux = 0;
       for (v_aux = 0; v_aux < TAM_MAX; v_aux++){
  
        	/* Atualizar vetor de dist[v] somente se não estiver no conj_cam_curto, 
        	existe uma borda de u para v, 
        	e o peso total do caminho do destino para v até u, é menor que o valor atual do vetor de dist [v] */
        	if (!conj_cam_curto[v_aux] && grafico[u][v_aux] && v_dist[u] != INT_MAX && v_dist[u]+grafico[u][v_aux] < v_dist[v_aux]){
            	v_dist[v_aux] = v_dist[u] + grafico[u][v_aux];
        	}
    	}
    }
  
    /* imprimir a matriz de distância construída */
	imprime(v_dist, destino);
}
  
