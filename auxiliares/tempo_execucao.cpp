#include "tempo_execucao.h"
#include <chrono>

double medirTempo(void (*func)(int*, int), int v[], int n) {

    auto inicio = std::chrono::high_resolution_clock::now();

    func(v, n);

    auto fim = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> tempo = fim - inicio;

    return tempo.count();
}