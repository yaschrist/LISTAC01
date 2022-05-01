//32- ??

#include <iostream>
#include <math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float numero, resultado;
	
	printf("Digite um número: ");
	scanf("%f", &numero);
	
	resultado = (((numero * 3) + 1) + ((numero * 2)-1));
	printf("O resultado é: %.2f", resultado);
}
