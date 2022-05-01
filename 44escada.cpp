//44 - escada

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float degrau, altura, resultado;
	
	printf("Digite a altura do degrau: ");
	scanf("%f", &degrau);
	
	printf("Digite a altura que você quer alcançar: ");
	scanf("%f", &altura);
	
	resultado = altura/degrau;
	
	printf("Número de degraus que você precisa subir: %.0f", resultado);
}
