#include "bubble.h"

void bubbleSort(int v[], int n) {   // Função para o algoritmo Bubble Sort

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (v[j] > v[j + 1]) {

                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}