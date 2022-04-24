// 10 - km/h 

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float km, ms;
	
	printf("Digite a velocidade em km/h: ");
	scanf("%f", &km);
	
	ms = km/3.6;
	printf("A velocidade em metros por segundo é: %.2f", ms);
}
