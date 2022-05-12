// 25 - acres para metros

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float acres, metros;
	
	printf("Digite o valor em acres: ");
	scanf("%f", &acres);
	
	metros = acres*4048.58;
	printf("O valor em metros é: %f", metros);
}
