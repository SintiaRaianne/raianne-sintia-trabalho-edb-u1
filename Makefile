all: main

main: main.o bubble.o insertion.o busca_sequencial.o busca_binaria.o professor.o vetor.o tempo_execucao.o executor.o media.o complexidade.o
	g++ -Wall -std=c++17 -o main main.o bubble.o insertion.o busca_sequencial.o busca_binaria.o professor.o vetor.o tempo_execucao.o executor.o media.o complexidade.o

main.o: main.cpp
	g++ -Wall -std=c++17 -c main.cpp

bubble.o: algoritmos/bubble.cpp
	g++ -Wall -std=c++17 -c algoritmos/bubble.cpp

insertion.o: algoritmos/insertion.cpp
	g++ -Wall -std=c++17 -c algoritmos/insertion.cpp

busca_sequencial.o: algoritmos/busca_sequencial.cpp
	g++ -Wall -std=c++17 -c algoritmos/busca_sequencial.cpp

busca_binaria.o: algoritmos/busca_binaria.cpp
	g++ -Wall -std=c++17 -c algoritmos/busca_binaria.cpp

professor.o: algoritmos/professor.cpp
	g++ -Wall -std=c++17 -c algoritmos/professor.cpp

vetor.o: auxiliares/vetor.cpp
	g++ -Wall -std=c++17 -c auxiliares/vetor.cpp

tempo_execucao.o: auxiliares/tempo_execucao.cpp
	g++ -Wall -std=c++17 -c auxiliares/tempo_execucao.cpp

executor.o: analises/executor.cpp
	g++ -Wall -std=c++17 -c analises/executor.cpp

media.o: analises/media.cpp
	g++ -Wall -std=c++17 -c analises/media.cpp

complexidade.o: analises/complexidade.cpp
	g++ -Wall -std=c++17 -c analises/complexidade.cpp

clean:
	rm -f *.o main