//14 - angulo radiano

#include <iostream>
#include <math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float graus, radiano;
	
	printf("Digite o ângulo em graus: ");
	scanf("%f", &graus);
	
	radiano = graus * M_PI/180;
	
	printf("O ângulo em radiano é: %.2f", radiano);
}
