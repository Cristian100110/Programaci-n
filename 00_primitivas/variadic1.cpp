#include<stdio.h>
#include<stdlib.h>

int main(){
	int op1;
	int op2;

	system("toilet --metal -fpagga Enteros");

	printf("Dime un número \n");
	scanf("%i", &op1);
	printf("Dime otro número \n");
	scanf("%i", &op2);

	printf("%i + %i = %i \n", op1, op2, op1 + op2);
	printf("%i - %i = %i \n", op1, op2, op1 - op2);
	printf("%i * %i = %i \n", op1, op2, op1 * op2);
	printf("%i / %i = %i \n", op1, op2, op1 / op2);

	return EXIT_SUCCESS;
}
