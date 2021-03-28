#include <stdio.h>



int somaRecursiva(int n);
int soma(int n);
int fatRecursiva(int n);
int fat(int n);

int main(void) { // Ponto de entrada do Programa 
  int a,b;

  printf("Trabalhando com Recursividade\n");
  printf("Usando a função soma recursiva\n");
  printf("Soma até 10: %d\n", somaRecursiva(10));
  printf("Usando a função soma não recursiva\n");
  printf("Soma até 10: %d\n", soma(10));
  printf("Usando a função fatorial recursiva\n");
  printf("Fatorial de 10: %d\n", fatRecursiva(10));
  printf("Usando a função fatorial não recursiva\n");
  printf("Fatorial de 10: %d\n", fat(10));

  return 0;
}

int somaRecursiva(int n){
  if (n > 0)
    return n + somaRecursiva(n-1);
  else
    return 0;
}

int soma(int n){
  int soma = 0;
  for(int i = 0; i <= n; i++)
    soma += i;
  return soma;
}

int fatRecursiva(int n){
  if (n > 0)
    return n * fatRecursiva(n-1);
  else
    return 1;
}

int fat(int n){
  int prod = 1;
  for(int i = 1; i <= n; i++)
    prod *= i;
  return prod;
}