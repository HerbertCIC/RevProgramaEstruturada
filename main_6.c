#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	
#include <string.h>

#define QUANT_JOGOS 3

int *GerarVetorNaoRepetido(int, int, int, int);
void retirarRepeticoes(int *, int);
void printVet(int *,int);
void freeVet(int *);
void ordenar(int *,int);
int compararJogo(int *, int *, int );

int main(void) { // Ponto de entrada do Programa 

	printf("MEGA SENNA\n");
	printf("Sorteando numeros:\n");
  int *jogo_1,*jogo_2,*jogo_3, semente;

  printf("Digite a nova semente: ");
  scanf("%d", &semente);
  jogo_1 = GerarVetorNaoRepetido(1, 60, 6, semente);
  ordenar(jogo_1,6);
  printVet(jogo_1,6);

  printf("Digite a nova semente: ");
  scanf("%d", &semente);
  jogo_2 = GerarVetorNaoRepetido(1, 60, 6, semente);
  ordenar(jogo_2,6);
  printVet(jogo_2,6);

  printf("Digite a nova semente: ");
  scanf("%d", &semente);
  jogo_3 = GerarVetorNaoRepetido(1, 60, 6, semente);
  ordenar(jogo_3,6);
  printVet(jogo_3,6);

  int rep;
  rep = compararJogo(jogo_1,jogo_2,6);
  printf("%d números se repetem em ambos os jogos\n", rep);


  freeVet(jogo_1);
  freeVet(jogo_2); 
  freeVet(jogo_3);  
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
