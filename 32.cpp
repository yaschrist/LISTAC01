//32- ??

#include <iostream>
#include <math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float numero, resultado;
	
	printf("Digite um n�mero: ");
	scanf("%f", &numero);
	
	resultado = (((numero * 3) + 1) + ((numero * 2)-1));
	printf("O resultado �: %.2f", resultado);
}
