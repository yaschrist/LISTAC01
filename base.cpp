//base

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float var;
	
	printf("Mensagem de entrada: ");
	scanf("%f", &var);
	
	printf("O resultado �: %.2f", var);
}
