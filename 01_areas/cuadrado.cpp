#include <stdio.h>
#include <stdlib.h>

int main(){
	double lado,
	    area,
	    perimetro;

	system("toilet --metal -fpagga Cuadrado");

	printf("Dime cual es su lado: \n");
	scanf(" %lf", &lado);

	area = lado * lado;
	perimetro = 4 * lado;

	printf("Su area es: %.2lf \n"
		"Su perimetro es: %.2lf \n",
		area, perimetro );

	return EXIT_SUCCESS;
}
