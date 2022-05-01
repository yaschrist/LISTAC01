//idade - 50

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, resposta;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	resposta = 2022 - idade;
	
	printf("Você nasceu em: %d", resposta);
}
