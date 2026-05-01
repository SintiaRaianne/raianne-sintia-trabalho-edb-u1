#include "media.h"

double calcularMedia(double valores[], int tamanho) {

    double soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += valores[i];
    }

    return soma / tamanho;
}