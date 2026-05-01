#include "complexidade.h"
#include <iostream>
#include <cmath>

void compararComplexidade(int n[], double tempo[], int tamanho) {  // Realiza a comparação de complexidade

    
    double base = tempo[0];

    double erro_log = 0;
    double erro_n = 0;
    double erro_nlogn = 0;
    double erro_n2 = 0;
    double erro_n3 = 0;

    for (int i = 0; i < tamanho; i++) {   // Calcula o erro para cada complexidade

        double t = tempo[i] / base;

        double logn = log(n[i]) / log(n[0]);
        double fn = (double)n[i] / n[0];
        double fnlogn = (n[i]*log(n[i])) / (n[0]*log(n[0]));
        double fn2 = (n[i]*n[i]) / (double)(n[0]*n[0]);
        double fn3 = (n[i]*n[i]*n[i]) / (double)(n[0]*n[0]*n[0]);

        erro_log += fabs(t - logn);
        erro_n += fabs(t - fn);
        erro_nlogn += fabs(t - fnlogn);
        erro_n2 += fabs(t - fn2);
        erro_n3 += fabs(t - fn3);
    }

    // Imprime os resultados da comparação de complexidade

    std::cout << "\nComparacao de complexidade:\n";

    std::cout << "Erro O(log n): " << erro_log << std::endl;
    std::cout << "Erro O(n): " << erro_n << std::endl;
    std::cout << "Erro O(n log n): " << erro_nlogn << std::endl;
    std::cout << "Erro O(n^2): " << erro_n2 << std::endl;
    std::cout << "Erro O(n^3): " << erro_n3 << std::endl;

    double menor = erro_log;
    std::string resultado = "O(log n)";

    // Determine o menor erro para identificar a complexidade mais provável

    if (erro_n < menor) {
        menor = erro_n;
        resultado = "O(n)";
    }

    if (erro_nlogn < menor) {
        menor = erro_nlogn;
        resultado = "O(n log n)";
    }

    if (erro_n2 < menor) {
        menor = erro_n2;
        resultado = "O(n^2)";
    }

    if (erro_n3 < menor) {
        menor = erro_n3;
        resultado = "O(n^3)";
    }

    std::cout << "Melhor ajuste: " << resultado << std::endl;
}