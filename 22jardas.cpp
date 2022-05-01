// 22 - jardas para metros

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float jardas, metros;
	
	printf("Digite o valor em jardas: ");
	scanf("%f", &jardas);
	
	metros = jardas*0.91;
	printf("O valor em metros é: %f", metros);
}
