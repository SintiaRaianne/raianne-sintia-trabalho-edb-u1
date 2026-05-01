#include "vetor.h"
#include <cstdlib>

void gerarVetor(int v[], int n) {   // Gera o vetor com valores aleatórios

    for (int i = 0; i < n; i++) {
        v[i] = rand() % 10000;
    }
}