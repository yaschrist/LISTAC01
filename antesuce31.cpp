//31 - antecessor e sucessor 

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, antecessor, sucessor;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("O antecessor é %d e o sucessor %d", antecessor, sucessor);
}
