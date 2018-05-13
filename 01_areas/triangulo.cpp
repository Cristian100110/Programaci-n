#include <stdio.h>
#include <stdlib.h>

int main(){
	double base, altura, hipotenusa, area, perimetro;

	system("toilet --metal -fpagga TrianguloRec");/*poner un titulo leches*/

	printf("Dime cual es su base: \n");
	scanf("%lf",&base);
	printf("Dime cual es su altura: \n");
	scanf("%lf",&altura);
	printf("Dime cual es su hipotenusa: \n");
	scanf("%lf",&hipotenusa);

	area = ((base * altura) / 2);
	perimetro = base + altura + hipotenusa;

	printf("Su area es: %.2lf \n"
		"Su perimetro es: %.2lf \n",
		area, perimetro);
	return EXIT_SUCCESS;
}
