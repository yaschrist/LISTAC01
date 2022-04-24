// 16 - polegadas para cm

#include<iostream>
#include<math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float polegadas, cm;
	
	printf("Digite o número em polegadas: ");
	scanf("%f", &polegadas);
	
	cm = polegadas * 2.54;
	
	printf("O valor em cm é: %.2f", cm);
}
