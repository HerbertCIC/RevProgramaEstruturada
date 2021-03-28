#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  /*A linguagem C não possui o tipo de dado String,
apenas character (1 único caractere),
O C manipula cadeias de caracteres através de
vetores unidimensionais de caracteres,
Toda String termina com o caractere especial ‘\0’*/

/*Aspas simples indicam caracteres,
Aspas duplas indicam strings,*/

//declaração e inicialização
char vet[5]={'U','E','S','C','\0'};
char vet_1[5]= "UESC";
char vet_2[] = "UESC";
//percorrendo o vetor e exibindo um caractere por vez
for (int i=0; i<4; i++)
    printf("Vetor na posição[%d] = %c\n",i,vet_2[i]);
//lendo string
char nome[50];
//printf("Digite seu nome: ");
//realiza a leitura até encontrar um espaço
/*scanf("%s",nome);
printf("O nome informado foi: %s\n", nome);
fflush(stdin);*/

//armazena tudo que foi digitado, inclusive os espaços
/*printf("Digite seu nome: ");
gets(nome);
fflush(stdin);
printf("O nome informado foi: %s\n", nome);*/
//limita o número de caracteres lidos pelo parâmetro tamanho
printf("Digite seu nome: ");
fgets(nome, sizeof(nome), stdin);
printf("O nome informado foi: %s\n", nome);
fflush(stdin);

//------uso das funções da biblioteca string.h-------

printf("_______________________________\n");
//Realiza cópia do conteúdo de uma variável string à outra
strcpy(nome, "Herbert Andrade");
printf("strcpy String = %s\n", nome);//strcpy(string_destino, string_origem);
  
//Realiza a cópia do conteúdo de uma variável a outra, porém,deve ser especificado o tamanho a ser copiado
strncpy(nome, "Herbert Andrade", 7);//strncpy(string_destino, string_origem, tamanho);
nome[7] = '\0';
printf("strncpy String = %s\n", nome);

printf("_______________________________\n");
//Realiza a concatenação do conteúdo de uma variável string à outra
 strcat(nome, " Nascimento");//strcat(string_destino, string_origem);  
printf("strcat String = %s\n", nome);

//Realiza a concatenação do conteúdo de uma variável a outra,porém deve ser especificado o tamanho a ser concatenado.
char a[30] = "Linguagem de";
char b[16] = " programacao III";
strncat(a, b, 16);//strncat(string_destino, string_origem, tamanho); 
printf("strncat String = %s\n", a);

printf("_______________________________\n");
//Retorna o tamanho de uma string
int tamanho = strlen(a);
 printf("O tamanho da string %s vale %d\n", a, tamanho);
printf("_______________________________\n");
/*Compara o conteúdo de duas strings e retorna 0 caso
o conteúdo das strings sejam iguais, <0 caso
o conteúdo da string1 seja diferente ou menor do que da string2, valor >0 caso o conteúdo da string1 seja maior do que da string2*/
char str1[5] = "JAVA";
int retorno;
retorno = strcmp(str1, "JAVA");
printf("retorno = %d\n", retorno);
retorno = strcmp(str1, "JAVO");
printf("retorno = %d\n", retorno);
retorno = strcmp(str1, "JAVAMOS");
printf("retorno = %d\n", retorno);
retorno = strcmp(str1, "JA");
printf("retorno = %d\n", retorno);

//Da mesma forma que a anterior, faz a comparação do conteúdo de duas strings, porém, deve ser especificado o tamanho a ser comparado
retorno = strncmp(str1, "JAVAMOS", 4);
printf("strncm retorno = %d\n", retorno);

 return 0;
}
