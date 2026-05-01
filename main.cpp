#include "analises/executor.h"

#include "algoritmos/bubble.h"
#include "algoritmos/insertion.h"
#include "algoritmos/busca_sequencial.h"
#include "algoritmos/busca_binaria.h"
#include "algoritmos/professor.h"

int main() {

    executarTeste(bubbleSort, "Bubble Sort");
    executarTeste(insertionSort, "Insertion Sort");

    executarTeste(buscaSequencialAdaptada, "Busca Sequencial");
    executarTeste(buscaBinariaAdaptada, "Busca Binaria");

    executarTeste(algoritmoDoProfessor, "Algoritmo do Professor");

    return 0;
}