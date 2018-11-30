#ifndef MC202_GRAFO_H
#define MC202_GRAFO_H

typedef struct No {
    int indice;
    struct No *prox;
} No;

typedef No *p_no;

typedef struct No_Grafo {
    int n_grupos; /* Numero de grupos em que esse no se encontra */
    p_no conexoes;
} No_Grafo;

typedef struct Grafo {
    int n_nos;
    No_Grafo *nos;
} Grafo;

Grafo cria_grafo(int n_nos);

void cria_conexao(Grafo grafo, int u, int v);

void adiciona_grupo(Grafo grafo, int pos);

void busca_em_largura(Grafo grafo, int *distancias, int pos);

void destroi_grafo(Grafo grafo);

/* A remocao nao e nescessaria */

#endif
