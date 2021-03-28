#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	

#define QUANT_JOGOS 3

int *GerarVetorNaoRepetido(int, int, int, int);
void retirarRepeticoes(int *, int);
void bubble_sort (int vetor[], int n);
void printVet(int *,int);
int gerarSemente();
void freeVet(int *);
void ordenar(int *,int);

int main(void) { // Ponto de entrada do Programa 

	printf("MEGA SENNA\n");
	printf("Sorteando numeros:\n");
  int *jogo, semente;
  for(int i=1;i<=QUANT_JOGOS;i++){
      printf("Digite a semente: ");
      scanf("%d", &semente);
      jogo = GerarVetorNaoRepetido(1, 60, 6, semente);
      ordenar(jogo,6);
      printVet(jogo,6);
  }  
  freeVet(jogo); 
	return 0;
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

 /* int *vet;
  vet = malloc(tam*sizeof(int));
	if (semente > 0)
		srand(semente);
	else if(semente < 0)
		srand(time(NULL));
	int dado;
	for(int i = 1; i <= qtVezes; i++){
		dado = min + rand()%tam;
    vet[i]=dado;
	}
  retirarRepeticoes(vet,tam);
  if(strlen(vet)==tam);
  return vet;
}*/

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

void freeVet(int *vet){
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
