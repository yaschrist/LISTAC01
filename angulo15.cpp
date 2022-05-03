// 15 - radiano para graus

#include <iostream>
#include <math.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float radiano, graus;
	
	printf("Digite o ângulo em radianos: ");
	scanf("%f", &radiano);
	
	graus = radiano * 180/M_PI;
	
	printf("O Ângulo em graus é: %f", graus);
}
