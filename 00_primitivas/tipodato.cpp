#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"

int main(){
	int entero = 34;
	float realillo = 35.7;
	double real = 35.7;
	unsigned char byte = 97;

	long int entero_largo = 93;
	unsigned positivo = 5;
	
	system("toilet --metal -fpagga DATOS");/*Decorar titulo sudo apt-get install toilet*/
	printf("%i \t(%lu bytes)\n", entero, sizeof(int)); /*numero entero ocupa 4 bytes*/
	printf("%li \t(%lu bytes)\n", entero_largo, sizeof(int));/*entero largo 4 bytes*/
	printf("%u \t(%lu bytes)\n", positivo, sizeof(int));/*numero positivo 4 bytes*/

	printf("%i \t(%lu bytes)\n", byte, sizeof(char));/*tipo char ocupa 1 byte*/

	printf("%f  \t(%lu bytes)\n", realillo, sizeof(float));/*Ocupa 4 butes a pesar de ser un numero largo*/
	printf("%8.2lf \t(%lu bytes)\n", real, sizeof(double));/*Lo mismo pero con 2 decimales*/

	printf("%c%c%c", 49, 50, 10);
	printf("%c%c%c", 0x31, 0x32, 0xA);
	printf(ROJO "12\n" NORM);
	

	return EXIT_SUCCESS;
}
