#include<stdio.h>
#include<stdlib.h>

int main(){
	/*Zona variable*/
	double op1;
	double op2;

	/*Mi super letrero*/
	system("toilet --metal -fpagga Double");	

	/*Preguntar y almacenar*/
	printf("Dime un número: \n");
	scanf("%lf",&op1);
	printf("Dime otro número: \n");
	scanf("%lf",&op2);

	printf("cosas chulis \n");

	/*Zona operaciones*/
	/*%8.2lf sirve para: 8 para los espacios al principio 2 los decimales*/
	printf("%.2lf + %.2lf = %.2lf \n",op1, op2, op1 + op2);
	printf("%.2lf - %.2lf = %.2lf \n",op1, op2, op1 - op2);
	printf("%.2lf * %.2lf = %.2lf \n",op1, op2, op1 * op2);
	printf("%.2lf / %.2lf = %.2lf \n",op1, op2, op1 / op2);
	return EXIT_SUCCESS;
}
