

#include <stdio.h>


int main(int argc, char *argv[]) { // Ponto de entrada do Programa 
  
	char name[100]; //name[0], name
	printf("Hello World!\n");    //output
	if(argc > 1)
		printf("Hi %s, good to see you here!!!\n", argv[1]);
	else{
		printf("Whats your name?"); 
  	int err = scanf("%s", name);          //input
		printf("Hi %s, good to see you here!!!\n", name);
	}
  return 0;
}