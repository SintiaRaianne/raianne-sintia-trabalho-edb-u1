#include "busca_binaria.h"
#include <algorithm>

int buscaBinaria(int v[], int inicio, int fim, int valor) {  // Função para o algoritmo de busca binária

    while (inicio <= fim) {

        int meio = (inicio + fim) / 2;

        if (v[meio] == valor)
            return meio;

        else if (v[meio] < valor)
            inicio = meio + 1;

        else
            fim = meio - 1;
    }

    return -1;
}

void buscaBinariaAdaptada(int v[], int n) {

    int valor = v[n / 2];

    buscaBinaria(v, 0, n - 1, valor);
}