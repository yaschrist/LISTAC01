//55 - terreno

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float comprimento, largura, tamanho, preco, resultado;
	
	printf("Comprimento do terreno: ");
	scanf("%f", &comprimento);
	
	printf("Largura: ");
	scanf("%f", &largura);
	
	printf("Preco da tela: ");
	scanf("%f", &preco);
	
	tamanho = (comprimento*2) + (largura*2);
	resultado = tamanho*preco;
	
	printf("O valor é: %.2f", resultado);
}
