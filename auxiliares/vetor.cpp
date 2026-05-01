#include "vetor.h"
#include <cstdlib>

void gerarVetor(int v[], int n) {

    for (int i = 0; i < n; i++) {
        v[i] = rand() % 10000;
    }
}