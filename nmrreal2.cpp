// 2 - n�mero real

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Digite um n�mero real: ");
	scanf("%f",&numero);
	
	printf("O n�mero �: %.3f", numero);
}
