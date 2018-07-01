#include "dijkstra.h"

/* Função de utilidade para encontrar a vértice com  a menor distância, 
   a partir do conjunto de vértices ainda não processados*/
int min(int v_dist[], int conj_cam_curto[]){

    /* Inicializa valor minimo */
    int min = INT_MAX, min_index;
    
    int v_aux = 0;
    for (v_aux = 0; v_aux < TAM_MAX; v_aux++){
        if (conj_cam_curto[v_aux] == 0 && v_dist[v_aux] <= min){
            min = v_dist[v_aux], min_index = v_aux;
        }
    }

    return min_index;
}