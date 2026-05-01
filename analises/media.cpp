#include "media.h"

double calcularMedia(double valores[], int tamanho) {  // Calcula a média dos tempos


    double soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += valores[i];
    }

    return soma / tamanho;
}