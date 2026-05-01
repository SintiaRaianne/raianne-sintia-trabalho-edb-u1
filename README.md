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
  
## 🏛️ Trabalho Unidade 01

**Objetivo**: 

**Repositório**: https://github.com/SintiaRaianne/raianne-sintia-trabalho-edb-u1.git


### Funcionalidades Implementadas:
- **Cadastro de Livros**: Permite ao usuário adicionar novos livros ao sistema, informando o título e o autor. O sistema define o status inicial do livro como "Disponível".
- **Listagem de Livros**: Exibe todos os livros cadastrados, mostrando o ID, título, autor e o status atual.
- **Cadastro de Usuários**: Permite o registro de novos usuários, solicitando nome e matrícula. 
- **Listagem de Usuários**: Mostra todos os usuários cadastrados no sistema com seus respectivos IDs, nomes e matrículas.
- **Realização de Empréstimos**: Realiza o empréstimo, verificando a disponibilidade do livro e garantindo que o usuário não tenha ultrapassado o limite permitido de empréstimos ativos.
- **Menu Interativo**: Exibe o menu principal, permitindo que o usuário o selecione a operação desejada.
- **Limpeza de Tela**: Limpa o terminal a cada nova interação no menu, oferecendo uma interface mais organizada e agradável.
