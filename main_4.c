

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) { // Ponto de entrada do Programa 
  
  printf("Estruturas de Controle\n");
	printf("Estruturas de Seleção\n");
	int condTrue = 1;
	int condFalse = 0;
	int n;
	printf("Entre com um número inteiro:");
	int err = scanf("%d", &n);
	//Estrutura de seleção simples if
	if(n % 2 == 0)
		printf("O número %d é par!\n", n);
	if(n % 2 != 0){
		printf("O número %d é impar!\n", n);
	}
	//Estrutura de seleção if/else
	if(n%3){ //diferente de zero é true, zero é false (n%3 != 0)
		printf("O número %d não é múltiplo de 3!\n", n);
	}else{  //(n%3 == 0)
		printf("O número %d é múltiplo de 3!\n", n);
	}
	//Estrutura de seleção múltipla switch-case
	switch (n%5){
		case 0:
			printf("O número %d é divisivel por 5!\n", n);
			break;
		case 1:
			printf("O número %d não é divisíevel por 5, resto 1!\n", n);
			break;
		case 2:
			printf("O número %d não é divisíevel por 5, resto 2!\n", n);
			break;
		case 3:
			printf("O número %d não é divisíevel por 5, resto 3!\n", n);
			break;
		default:
			printf("O número %d não é divisíevel por 5, resto 4!\n", n);
			break;
	}

	printf("Estruturas de Repetição\n");
	int pot2 = 1;
	int exp2 = 0;
	while (pot2 <= n){
		pot2 *= 2;
		exp2++;
	}
	printf("A primeira potencia de 2 maoir que %d é 2^%d = %d\n", n, exp2, pot2);
  //modificacao a
  srand(time(NULL)); 
  int num = 1 + rand() % 100;
  int chute, chutePC, cont=0,contPC=0, op, left=1, right=100; 
	printf("\nPensei em um número inteiro entre 1 100 (incluidos) tente adivinhar...\n");
  //Usuario
  do{
    cont++;
    printf("%d tentativa: ", cont);
    scanf("%d",&chute);
    if(chute==num){
      printf("Respota correta!!\nTentativas = %d\n", cont);
      break;
    }
    else if(num>chute)
      printf("Errou!! é maior!!\n");
    else
      printf("Errou!! é menor!!\n"); 
  }while(1);
  //Competidor
  chutePC = left+rand()%right;
  do{
    if(num==chutePC)
        op = 0;
    else if(num>chutePC)
          op = 1;
    else
          op=2;
		contPC++;
		switch(op){
			case 0:
				printf("Competidor encontrou em %d tentativas!!!\n", contPC);
				break;
			case 1: 
				left = chutePC;
				chutePC = (left + right) / 2;
				break;
			case 2:
				right = chutePC;
				chutePC = (left + right) / 2;
				break;
			default:
				break;
		}
	}while (op != 0); 

  if(cont < contPC){
      printf("Parabéns você adivinhou primeiro!!!\n");
  }else if(cont > contPC)
      printf("O Competidor adivinhou primeiro!!\n");
  else
    printf("Empate !!\n");

	int soma = 0;
	for(int i = 1; i <= num; i++){
		soma += i;
	}
	printf("A soma de todos os inteiros de 1 até %d é %d\n", num, soma);
  
	//(soma == num*(num+1)/2)?printf("Resposta correta\n"):printf("Resposta errada\n");

	return 0;

}