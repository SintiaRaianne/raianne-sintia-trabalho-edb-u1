#include "professor.h"

// PROFESSOR USAR O CÓDIGO AQUI
void algoritmoDoProfessor(int arr[], int n) {        

// Pode colocar qualquer algoritmo aqui

 for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}