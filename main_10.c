#include <stdio.h>

typedef struct{
 char nome[50];
 int idade;
 char sexo;
 float CR;
}Taluno;


void naoTrocaValores(double x, double y);
void trocaValores(double *x, double *y);
void le_Aluno(Taluno *);
void prn_Aluno(const Taluno *);

int main(void) { // Ponto de entrada do Programa 

printf("Trabalhando com passagem de parâmetros\n");
double x, y;
x = 3.14;
y = 6.28;
printf("1- x = %f, y = %f\n", x, y);
naoTrocaValores(x, y);
printf("4- x = %f, y = %f\n", x, y);
trocaValores(&x, &y);
printf("7- x = %f, y = %f\n", x, y);

printf("Trabalhando com passagem de parâmetros por struct\n");
 Taluno dado;
 le_Aluno(&dado);
 prn_Aluno(&dado);

return 0;
}

void naoTrocaValores(double x, double y){
  double z;
  printf("2- x = %f, y = %f\n", x, y);
  z = x;
  x = y;
  y = z;
  printf("3- x = %f, y = %f\n", x, y);
}

void trocaValores(double *x, double *y){
  double z;
  printf("5- x = %f, y = %f\n", *x, *y);
  z = *x;
  *x = *y;
  *y = z;
  printf("6- x = %f, y = %f\n", *x, *y);
}

void le_Aluno(Taluno *Ptr){
 printf("Digite o nome: ");
 fgets(Ptr->nome,sizeof(Ptr->nome),stdin);
 printf("Digite a idade: ");
 scanf("%d", &(Ptr->idade));
 fflush(stdin);
 printf("Digite o sexo (M ou F):");
 scanf("%c", &(Ptr->sexo));
 fflush(stdin);
 printf("Digite o CR: ");
 scanf("%f", &(Ptr->CR));
}

void prn_Aluno(const Taluno *Ptr){
 printf("\n--Dados do Aluno--\n");
 printf("Nome: %s\n", Ptr->nome);
 printf("Idade: %d\n", Ptr->idade);
 printf("Sexo: %c\n", Ptr->sexo);
 printf("CR: %.2f\n", Ptr->CR);
}
