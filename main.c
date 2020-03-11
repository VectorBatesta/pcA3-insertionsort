#include <stdio.h>
#include <stdlib.h>

void insertionsort(int vetor[15], int tamv){
  int aux;
  for(int i=0; i<15; i++){
    for(int j=i; j>0; j--){
      if(vetor[j] < vetor[j-1]){
        aux = vetor[j];
        vetor[j] = vetor[j-1];
        vetor[j-1] = aux;
      }
    }
  printf("\niteracao %i: ", i+1);
  for(int i=0; i<15; i++)
    printf("%i, ", vetor[i]);
  }
}

int main(){
  int vector[15]={534,245,2345,234,52345,234,5234,56,73,3,62,7,25};

  insertionsort(vector, sizeof(vector)/4);

  printf("\n\nvetor final: ");
  for(int i=0; i< (sizeof(vector)/4); i++)
    printf("%i, ", vector[i]);

  return 0;
}
