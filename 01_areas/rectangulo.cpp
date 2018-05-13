#include <stdio.h>
#include <stdlib.h>

int main (){
	double base, altura, area, perimetro;

	system("toilet --metal -fpagga Rectangulo");

	printf("Dime cual es su base: \n");
	scanf("%lf",&base);
	printf("Dime cual es su altura: \n");
	scanf("%lf",&altura);

	area = base * altura;
	perimetro = ((base + altura) * 2);

	printf("Su area es: %.2lf \n"
		"Su perimetro es: %.2lf \n",
		area, perimetro );

	return EXIT_SUCCESS;
}
