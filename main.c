#include <stdio.h>
#include <stdlib.h>

void insertionsort(int vetor[15], int tamv){
  int aux;
  for(int i=0; i<15; i++){
    for(int j=0; j<i; j++){
      if(vetor[i] < vetor[j]){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  printf("\niteracao %i: ", i+1);
  for(int i=0; i<15; i++)
    printf("%i, ", vetor[i]);
  }
}

int main(){
  int vector[15]={234,545,2345,234,52345,234,5234,56,73,3,62,7,25};

  printf("iteracao 0: ");
  for(int i=0; i< (sizeof(vector)/4); i++)
    printf("%i, ", vector[i]);

  insertionsort(vector, sizeof(vector)/4);

  printf("\n\nvetor final: ");
  for(int i=0; i< (sizeof(vector)/4); i++)
    printf("%i, ", vector[i]);

  return 0;
}
