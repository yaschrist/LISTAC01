//idade - 50

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade, resposta;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	resposta = 2022 - idade;
	
	printf("Voc� nasceu em: %d", resposta);
}
