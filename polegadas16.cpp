// 16 - polegadas para cm

#include<iostream>
#include<math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float polegadas, cm;
	
	printf("Digite o n�mero em polegadas: ");
	scanf("%f", &polegadas);
	
	cm = polegadas * 2.54;
	
	printf("O valor em cm �: %.2f", cm);
}
