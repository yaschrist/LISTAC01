// 27 - hectares para metros

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float hectares, metros;
	
	printf("Digite o valor em hectares: ");
	scanf("%f", &hectares);
	
	metros = hectares*10000;
	printf("O valor em metros é: %f", metros);
}
