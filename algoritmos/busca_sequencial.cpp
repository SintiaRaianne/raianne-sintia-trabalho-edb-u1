#include "busca_sequencial.h"

int buscaSequencial(int v[], int n, int valor) {  // Função para o algoritmo de busca sequencial

    for (int i = 0; i < n; i++) { 
        if (v[i] == valor)
            return i;
    }
    return -1;
}

void buscaSequencialAdaptada(int v[], int n) { 

    int valor = v[n / 2];
    
    buscaSequencial(v, n, valor);
}