#include "executor.h"
#include "../auxiliares/vetor.h"
#include "../auxiliares/tempo_execucao.h"
#include "media.h"
#include "complexidade.h"

#include <iostream>
#include <fstream>

void executarTeste(void (*func)(int*, int), const char* nome) {

    int tamanhos[5] = {1000, 2000, 3000, 4000, 5000};
    double tempos[5];

    std::ofstream arquivo(std::string(nome) + ".csv");
    arquivo << "n,tempo\n";

    std::cout << "\nAlgoritmo: " << nome << std::endl;

    for (int i = 0; i < 5; i++) {

        int n = tamanhos[i];
        int v[n];

        double valores[5];

        for (int j = 0; j < 5; j++) {

            gerarVetor(v, n);

            valores[j] = medirTempo(func, v, n);
        }

        tempos[i] = calcularMedia(valores, 5);

        arquivo << n << "," << tempos[i] << "\n";

        std::cout << "n=" << n << " tempo=" << tempos[i] << std::endl;
    }

    arquivo.close();

    compararComplexidade(tamanhos, tempos, 5);
}