# Estruturas de Dados Básicas I - Unidade 1

**Aluno**: Síntia Raianne Bezerra de Souza

**Matrícula**: 20250052970

**Período**: 2026.1

## 📂 Estrutura do Trabalho
- `main.cpp`: Arquivo principal que executa todos os testes
- `algoritmos/`: Implementação dos algoritmos analisados
    - `bubble.cpp / bubble.h`: Bubble Sort
    - `insertion.cpp / insertion.h`: Insertion Sort
    - `busca_sequencial.cpp / busca_sequencial.h`: Busca Sequencial
    - `busca_binaria.cpp / busca_binaria.h`: Busca Binária
    - `professor.cpp / professor.h`: Função reservada para o professor
- `auxiliares/`: Funções de apoio
    - `vetor.cpp / vetor.h`: Geração de vetores (aleatório e ordenado)
    - `tempo_execucao.cpp / tempo_execucao.h`: Medição do tempo de execução
- `analises/`: Parte responsável pelos testes e análise
    - `executor.cpp / executor.h`: Executa os testes para cada algoritmo
    - `media.cpp / media.h`: Cálculo da média dos tempos
    - `complexidade.cpp / complexidade.h`: Comparação com funções O(n), O(log n), etc.
`Makefile`: Compilação automatizada do projeto
`README.md`: Este arquivo
  
## 📚 Trabalho Unidade 01

**Objetivo**: Implementar um programa em C/C++ capaz de medir e comparar o tempo de execução de diferentes algoritmos, como por exemplo ordenação e busca, a fim de analisar seu comportamento e complexidades.

**Repositório**: https://github.com/SintiaRaianne/raianne-sintia-trabalho-edb-u1.git


### Funcionalidades Implementadas:
- **Execução de Algoritmos**: Permite executar diferentes algoritmos (Bubble Sort, Insertion Sort, Busca Sequencial e Busca Binária) para analisar de desempenho.
- **Geração de Vetores**: Cria automaticamente vetores de diferentes tamanhos.
- **Medição de Tempo de Execução**: Calcula o tempo de execução de cada algoritmo.
- **Repetição de Execuções**: Executa cada algoritmo múltiplas vezes para o mesmo tamanho de entrada, reduzindo interferências externas.
- **Cálculo da Média de Tempo**: Calcula o tempo médio de execução a partir das repetições.
- **Armazenamento dos Resultados**: Armazena os pares de valores (tamanho da entrada e tempo de execução) para cada algoritmo.
- **Comparação de Complexidade**: Compara os tempos obtidos com funções assintóticas conhecidas como O(log n), O(n), O(n log n), O(n²) e O(n³), identificando o melhor ajuste.
- **Análise de Função Externa (Professor)**: Possui uma função específica para inserção de um algoritmo externo, permitindo sua análise sem necessidade de alterar o restante do código.
- **Execução Automatizada de Testes**: Realiza automaticamente os testes para diferentes tamanhos de entrada, exibindo os resultados no terminal.
- **Organização Modular do Código**: Estrutura o projeto em diferentes módulos (algoritmos, auxiliares e análise).

