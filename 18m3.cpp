// 18 - volume em metros cúbicos

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float m3, litros;
	
	printf("Digite o valor em metros cúbicos: ");
	scanf("%f", &m3);
	
	litros = 1000 * m3;
	
	printf("O valor em litros é: %.2f", litros);
	
}
