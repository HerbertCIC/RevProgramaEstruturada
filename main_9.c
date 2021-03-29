#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	
#include <string.h>

typedef struct{
    int *jogo;  		// núeros sorteados
    int qtVezes;    // quantidade de sorteios
    int min;       	// valor inicial do intervalo
    int tam;				// tamanho do intervalo
} tJogo;

#define QUANT_JOGOS 3

int *GerarVetorNaoRepetido(tJogo, int);
void ordenar(tJogo);
void printVet(tJogo);
int *AlocaVet(int);
void freeVet(int *);
int compararJogo(tJogo, tJogo);


int main(void) { // Ponto de entrada do Programa 

	printf("MEGA SENNA\n");
	printf("Sorteando numeros:\n");
  int semente;
  tJogo jogadas_1, jogadas_2;
  jogadas_1.qtVezes = jogadas_2.qtVezes = 6;
  jogadas_1.tam = jogadas_2.tam = 60;
  jogadas_1.min = jogadas_2.min = 1;
  //alocacao
  jogadas_1.jogo = AlocaVet(jogadas_1.qtVezes);
  jogadas_2.jogo = AlocaVet(jogadas_2.qtVezes);  
  //Jogo 1
  printf("Digite a nova semente: ");
  scanf("%d", &semente);
  jogadas_1.jogo = GerarVetorNaoRepetido(jogadas_1,semente);
  ordenar(jogadas_1);
  printVet(jogadas_1);
  //Jogo 2
  printf("Digite a nova semente: ");
  scanf("%d", &semente);
  jogadas_2.jogo = GerarVetorNaoRepetido(jogadas_2,semente);
  ordenar(jogadas_2);
  printVet(jogadas_2);
  //Comparacão
  int rep;
  rep = compararJogo(jogadas_1,jogadas_2);
  printf("%d números se repetem em ambos os jogos\n", rep);
  /*freeVet(jogadas_1.jogo);
  freeVet(jogadas_2.jogo);*/
	return 0;
}

int *AlocaVet(int tam){
  int *Vet;
  Vet = (int *)malloc(tam * sizeof(int));
  if(Vet == NULL){
    printf("Erro!!");
  }
  return Vet;
}

int *GerarVetorNaoRepetido(tJogo jogo,int semente){
  int i, j, rep;
  srand(semente);
  for(i=0;i<jogo.qtVezes;i++){
    do{
      jogo.jogo[i] = jogo.min+rand()%jogo.tam;
      rep = 0;
      for(j=0;j<i;j++){
        if(jogo.jogo[i]==jogo.jogo[j]){
            rep=1;
            break;
        }
      }
    }while(rep);    
  }
  return jogo.jogo;
}

void printVet(tJogo jogo){
  printf("( ");
  for(int i = 0; i < jogo.qtVezes; i++){
		printf("%d", jogo.jogo[i]);
		if (i < jogo.qtVezes-1)
			printf(", ");
		else
			printf(")\n");
	}
}

void freeVet(int *vet){
  free(vet);
}

void ordenar(tJogo jogo){
  int aux;
  for (int i = 0; i < jogo.qtVezes; i++){
      for (int j = 0; j < jogo.qtVezes; j++){
        if (jogo.jogo[i] < jogo.jogo[j]){
            aux = jogo.jogo[i];
            jogo.jogo[i] = jogo.jogo[j];
            jogo.jogo[j] = aux;
        }
    }
  }
}

int compararJogo(tJogo jogo1,tJogo jogo2){
  int sentinela, cont=0;
  for(int i=0;i<jogo1.qtVezes;i++){
    sentinela=0;
    for(int j=0;j<jogo2.qtVezes;j++)
      if(jogo1.jogo[i] == jogo2.jogo[j]){
        sentinela = 1;
      }
    if(sentinela==1)
      cont++;
  }
  return cont;
}