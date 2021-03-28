#include <stdio.h>


int main(void) { // Ponto de entrada do Programa 
  
  printf("Declaração de Variáveis\n");
  float x;        	// declarando uma variável de ponto flutuante
  x = (float) 1.0;	// inicializando a variável co um casting
  // Modificadores 
  double y = 2.0;  	// declarando e inicializando
  long double  z= 4.0;
  // Lembrando da necessidade de inicializar as variáveis
  

	printf("Declaração e Inicialização de Variáveis\n");
  printf("Variáveis float: %.2f, %.2f, %.2Lf\n", x, y, z);
	printf("________________________________________\n");
	//Operadores com int
	printf("Operadores con float\n");
	printf("________________________________________\n");
	printf("Operador de atribuição\n");
	y = 5.0; 						// Operador de atribuição
	double y1, y2,y3, y4, y5;
	//atribuições múltiplas em um único comando
	y1 = y2 = y3 = y4 = y5 = y; 
	printf("y = %f, y1 = %f, y2 = %f\n", y, y1, y2);
	printf("y3 = %f, y4 = %f, y5 = %f\n", y3, y4, y5);
	printf("________________________________________\n");
	//Operadores Aritméticos
	printf("Operadores binarios\n");
	// Operadores binários
	y = y1 + y2; //adição
	printf("%f + %f = %f\n", y1, y2, y);
	y3 = y2 - y4; //substração
	printf("%f - %f = %f\n", y2, y4, y3);
	y4 = -y5; // utilizado como operador unario
	printf("-%f = %f\n", y5, y4);
	y2 = y1 * y3; //multiplicação
	printf("%f * %f = %f\n", y1, y3, y2);
	y = 4 / 2.0; //Divisão inteira
	printf("4 / 2.0 = %f\n", y);
	y = 5.0 / 2; //Divisão inteira (truncada)
	printf("5.0 / 2 = %f\n", y);
	printf("________________________________________\n");
	//Operadores compostos
	printf("Operadores de Compostos\n");
	printf("y = %f\n", y);
	y += 5.3; //y = y + 5.3
	printf("y += 5.3 -> y = %f\n", y);
	y -= 3.14; //y = y - 3.14
	printf("y -= 3.14 -> y = %f\n", y);
	y *= 4.7; //y = y*4
	printf("y *= 4.7 -> y = %f\n", y);
	y /= 2; //y = y/2
	printf("y /= 2 -> y = %f\n", y);
	printf("________________________________________\n");
	//Operadores Relacionais
	printf("Operadores de Relacionais\n");
	printf("%f > %f = %d\n", y1, y2, y1 > y2);
	printf("%f >= %f = %d\n", y2, y3, y2 >= y3);
	printf("%f < %f = %d\n", y3, y4, y3 < y4);
	printf("%f <= %f = %d\n", y4, y5, y4 <= y5);
	printf("%f == %f = %d\n", y5, y1, y5 == y1);
	printf("%f != %f = %d\n", y5, y1, y5 != y1);
	printf("________________________________________\n");
	
	y = 1.0;
	y1 = y2 = y3 = 1/3;
	y4 = y5 = 1/2;
	if ((y1+y2+y3 == y))
		printf("Identidade confirmada\n");
	else
		printf("Erros de truncamento!!!\n");
		
  return 0;

}