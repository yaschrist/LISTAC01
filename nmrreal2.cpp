// 2 - número real

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Digite um número real: ");
	scanf("%f",&numero);
	
	printf("O número é: %.3f", numero);
}
