#ifndef __DIJKSTRA_h
#define __DIJKSTRA_h
/* @author: Adler, Náthaly
   Disciplina: Redes
   Algoritmo de roteamento - Dijkstra.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
  
/* Número de vértices no gráfico */
#define TAM_MAX 6
  
/* Função de utilidade para encontrar a vértice com  a menor distância, 
   a partir do conjunto de vértices ainda não processados*/
int min(int v_dist[], int conj_cam_curto[]);
  
/* Função que imprime a matriz de distâncias construída */
void imprime(int v_dist[], int destino);

/* Função que implementa o algoritmo de caminho mais curto da origem.
   Um gráfico é usado representado por um arquivo de entrea que é uma matriz de adjacêntes */
void dijkstra(int grafico[][TAM_MAX], int destino);

FILE *read(char *nome); /* Função avre arquivo e retorna ele caso não tenha erro ou NULL */
int write(FILE *file, int grafico[][TAM_MAX]); /* Função que recebe o arquivo e escreve na amtriz, retorna uma matriz */

#endif
  