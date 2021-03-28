
/*
	um identificador válido e uma série de caracteres que 
	consistentes em letras, dígitos e sublinhados:
	- não pode começar com dígito, 
	- não pode ser uma palavra reservada da linguagem,
	- apenas letras do alfabeto inglês podem ser utilizadas.
	um identificador pode ter qualquer cumprimento, apenas 
	os 31 primeiros caracteres são reconhecidos,
	a linguagem C, é case sensitive, os caracteres minúsculos 
	e maiúsculos são diferentes.
*/

#include <stdio.h>


int main(void) { // Ponto de entrada do Programa 
  
	printf("Declaração de Variáveis\n");
	int a;        // declarando uma variável de tipo inteiro
	a = 1;        // inicializando a variável
	// Modificadores 
	long int b = 2;  // declarando e inicializando
	unsigned int c, d;  // declarando multiplas variáveis 
	short int e;   
	unsigned long int f = 4, g;
	// Lembrando da necessidade de inicializar as variáveis
	printf("Declaração e Inicialização de Variáveis\n");
  	printf("Variáveis int: %d, %ld, %u, %u, %d, %lu, %lu \n", a, b, c, d, e, f, g);
	printf("________________________________________\n");
	//Operadores com int
	printf("Operadores con int\n");
	printf("________________________________________\n");
	printf("Operador de atribuição\n");
	a = 5; 						// Operador de atribuição
	int a1, a2, a3, a4, a5;
	//atribuições múltiplas em um único comando
	a1 = a2 = a3 = a4 = a5 = a; 
	printf("a = %d, a1 = %d, a2 = %d\n", a, a1, a2);
	printf("a3 = %d, a4 = %d, a5 = %d\n", a3, a4, a5);
	printf("________________________________________\n");
	// Operadores binários
	printf("Operadores binarios\n");
	int x = 0b00001100;//12 decimal
	int y = 0b00001010;//10 decimal
 	printf("%d & %d = %d\n", x, y, x & y);// 00001000  AND bit a bit
	printf("%d | %d = %d\n", x, y, x | y);// 00001110	OR bit a bit
	printf("%d ^ %d = %d\n", x, y, x ^ y);// 00000110	XOR bit a bit (OU exclusivo)
	printf("~%d = %d\n", x, ~y);// 11110011 NOT bit a bit (complemento de 1)(unário)									
	int i = 1;
	//delocamento de bits à esquerda
	for(int j=0; j<4; j++){
		i = i << 1; // deslocamento i de 1 à esquerda, que é o mesmo que multiplicar por 2
		printf("deslocamento à esquerda %d: %d\n", j, i);
	}
	//delocamento de bits à direita
	for(int j=0; j<4; j++){
		i = i >> 1; // deslocamento i de 1 à direita, que é o mesmo que dividir por 2
		printf("deslocamento à direita %d: %d\n", j, i);
	}
	printf("________________________________________\n");
	//Operadores Aritméticos
	printf("Operadores Aritméticos\n");
	a = a1 + a2; //adição
	printf("%d + %d = %d\n", a1, a2, a);
	a3 = a2 - a4; //substração
	printf("%d - %d = %d\n", a2, a4, a3);
	a4 = -a5; // utilizado como operador unario
	printf("-%d = %d\n", a5, a4);
	a2 = a1 * a3; //multiplicação
	printf("%d * %d = %d\n", a1, a3, a2);
	a = 4 / 2; //Divisão inteira
	printf("4 / 2 = %d\n", a);
	a = 5 / 2; //Divisão inteira (truncada)
	printf("5 / 2 = %d\n", a);
	a = 5 % 2; //Resto da divisão
	printf("5 %% 2 = %d\n", a);
	printf("________________________________________\n");
	// Operadores de incremento e decremento
	printf("Operadores de Incremento e decremento\n");
	printf("a = %d\n", a);
	//++a; // a = a + 1
	printf("++a = %d\n", ++a);
	printf("a++ = %d\n", a++);
	printf("a = %d\n", a);
	//--a;
	printf("--a = %d\n", --a);
	printf("a-- = %d\n", a--);
	printf("a = %d\n", a);
	printf("________________________________________\n");
	//Operadores compostos
	printf("Operadores de Compostos\n");
	printf("a = %d\n", a);
	a += 5; //a = a + 5
	printf("a += 5 -> a = %d\n", a);
	a -= 3; //a = a - 3
	printf("a -= 3 -> a = %d\n", a);
	a *= 4; //a = a*4
	printf("a *= 4 -> a = %d\n", a);
	a /= 2; //a = a/2
	printf("a /= 2 -> a = %d\n", a);
	a %= 3; //a = a%3
	printf("a %%= 3 -> a = %d\n", a);
	printf("________________________________________\n");
	//Operadores Relacionais
	printf("Operadores de Relacionais\n");
	printf("%d > %d = %d\n", a1, a2, a1 > a2);
	printf("%d >= %d = %d\n", a2, a3, a2 >= a3);
	printf("%d < %d = %d\n", a3, a4, a3 < a4);
	printf("%d <= %d = %d\n", a4, a5, a4 <= a5);
	printf("%d == %d = %d\n", a5, a1, a5 == a1);
	printf("%d != %d = %d\n", a5, a1, a5 != a1);
	printf("________________________________________\n");
	printf("Operadores de Lógicos\n");
	int v_ = 1, f_ = 0;
	printf("Tabela da Verdade\n");
	printf("a \t b \t a&&b \t a||b \t !a\n");
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", f_, f_, f_&&f_, f_||f_, !f_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", f_, v_, f_&&v_, f_||v_, !f_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", v_, v_, v_&&v_, v_||v_, !v_);
	printf("%d \t %d \t %d \t\t %d \t\t %d\n", v_, f_, v_&&f_, v_||f_, !v_);
	printf("________________________________________\n");
	return 0;
}