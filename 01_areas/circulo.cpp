#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

int main(){
	double radio, area, perimetro;

	printf("Dime el radio: \n");
	scanf("%lf",&radio);

	area = pow (radio, 2) * PI;
	perimetro = (2 * ( PI * radio));

	printf("Su area es: %.2lf \n"
		"Su perimtro es: %.2lf \n",
		area, perimetro);

	return EXIT_SUCCESS;
}
