#include <stdio.h>
#include <stdlib.h>

int main(){

	fprintf(stdin,"Esto saldrá por el tubo de entrada\n");
	fprintf(stdout,"Esto saldrá por el tubo de salida\n");
	fprintf(stderr, "Esto saldrá por el tubo de errores\n");

	return EXIT_SUCCESS;
}
