//44 - escada

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float degrau, altura, resultado;
	
	printf("Digite a altura do degrau: ");
	scanf("%f", &degrau);
	
	printf("Digite a altura que voc� quer alcan�ar: ");
	scanf("%f", &altura);
	
	resultado = altura/degrau;
	
	printf("N�mero de degraus que voc� precisa subir: %.0f", resultado);
}
