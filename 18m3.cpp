// 18 - volume em metros c�bicos

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float m3, litros;
	
	printf("Digite o valor em metros c�bicos: ");
	scanf("%f", &m3);
	
	litros = 1000 * m3;
	
	printf("O valor em litros �: %.2f", litros);
	
}
