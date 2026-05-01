#include "executor.h"
#include "../auxiliares/vetor.h"
#include "../auxiliares/tempo_execucao.h"
#include "media.h"
#include "complexidade.h"

#include <iostream>

struct Resultado {   // Estrutura para armazenar os pares na memória
    int n;
    double tempo;
};

void executarTeste(void (*func)(int*, int), const char* nome) {  // Executa o teste para o algoritmo

    int tamanhos[5] = {1000, 2000, 3000, 4000, 5000};

    Resultado resultados[5];

    std::cout << "\nAlgoritmo: " << nome << std::endl;

    for (int i = 0; i < 5; i++) {  // Para cada tamanho definido de vetor, gera o vetor, mede o tempo e salva na memória

        int n = tamanhos[i];
        int v[n];

        double valores[5];

        for (int j = 0; j < 5; j++) {

            gerarVetor(v, n);
            valores[j] = medirTempo(func, v, n);
        }

        double media = calcularMedia(valores, 5);

        // Salva na memória
        resultados[i].n = n;
        resultados[i].tempo = media;

        std::cout << "n=" << n << " tempo=" << media << std::endl;
    }

    double tempos[5];    // Prepara os dados para a análise de complexidade


    for (int i = 0; i < 5; i++) {
        tempos[i] = resultados[i].tempo;
    }

    compararComplexidade(tamanhos, tempos, 5);
}