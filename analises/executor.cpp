#include "executor.h"
#include "../auxiliares/vetor.h"
#include "../auxiliares/tempo_execucao.h"
#include "media.h"
#include "complexidade.h"

#include <iostream>

struct Resultado {
    int n;
    double tempo;
};

void executarTeste(void (*func)(int*, int), const char* nome) {

    int tamanhos[5] = {1000, 2000, 3000, 4000, 5000};

    Resultado resultados[5];

    std::cout << "\nAlgoritmo: " << nome << std::endl;

    for (int i = 0; i < 5; i++) {

        int n = tamanhos[i];
        int v[n];

        double valores[5];

        // repetição para calcular média
        for (int j = 0; j < 5; j++) {

            gerarVetor(v, n);
            valores[j] = medirTempo(func, v, n);
        }

        double media = calcularMedia(valores, 5);

        // armazenando em memória
        resultados[i].n = n;
        resultados[i].tempo = media;

        std::cout << "n=" << n << " tempo=" << media << std::endl;
    }

    // preparar dados para análise de complexidade
    double tempos[5];

    for (int i = 0; i < 5; i++) {
        tempos[i] = resultados[i].tempo;
    }

    compararComplexidade(tamanhos, tempos, 5);
}