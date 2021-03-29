#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	
#include <string.h>

#define QUANT_JOGOS 3

int *GerarVetorNaoRepetido(int, int, int, int);
void ordenar(int *,int);
void printVet(int *,int);
int **mallocMatriz(int linha, int coluna);
void freeVet(int **, int);
int compararJogo(int *, int *, int );


int main(void) { // Ponto de entrada do Programa 

	printf("MEGA SENNA\n");
	printf("Sorteando numeros:\n");
  int **jogadas, semente, quant=6;
  jogadas = mallocMatriz(6,3);  
  for(int i=0; i< QUANT_JOGOS;i++){
    printf("Digite a nova semente: ");
    scanf("%d", &semente);
    jogadas[i] = GerarVetorNaoRepetido(1, 60, quant, semente);
    ordenar(jogadas[i],quant);
    printVet(jogadas[i],quant);
  }
  int rep;
  rep = compararJogo(jogadas[0],jogadas[1],quant);
  printf("%d números se repetem em ambos os jogos\n", rep);
  freeVet(jogadas,6);
	return 0;
}

int **mallocMatriz(int linha, int coluna){
    int **M;
    M = malloc(coluna * sizeof(int));
    if(M==NULL){
      printf("Erro!!");
    }
    for(int i=0;i<coluna;i++){
      M[i] = malloc(linha * sizeof(int));
      if(M[i]==NULL){
      printf("Erro!!");
      } 
    }
    return M;
  }

int *GerarVetorNaoRepetido(int min, int tam, int qtVezes,int semente){
  int *vetor;
  vetor = malloc(tam*sizeof(int));
  int i, j, rep;
  srand(semente);
  for(i=0;i<qtVezes;i++){
    do{
      vetor[i] = min+rand()%tam;
      rep = 0;
      for(j=0;j<i;j++){
        if(vetor[i]==vetor[j]){
            rep=1;
            break;
        }
      }
    }while(rep);    
  }
  return vetor;
}

void printVet(int *vet,int tam){
  printf("( ");
  for(int i = 0; i < tam; i++){
		printf("%d", vet[i]);
		if (i < tam-1)
			printf(", ");
		else
			printf(")\n");
	}
}

void freeVet(int **vet,int tam){
  for(int i=0;i<tam;i++){
    free(vet[i]);
  }
  free(vet);
}

void ordenar(int *vetor,int tam){
  int aux;
  for (int i = 0; i < tam; i++){
      for (int j = 0; j < tam; j++){
        if (vetor[i] < vetor[j]){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
    }
  }
}

int compararJogo(int *vet_1, int *vet_2, int tam){
  int sentinela, cont=0;
  for(int i=0;i<tam;i++){
    sentinela=0;
    for(int j=0;j<i;j++)
      if(vet_1[i] == vet_2[j]){
        sentinela = 1;
      }
    if(sentinela==1)
      cont++;
  }
  return cont;

}
