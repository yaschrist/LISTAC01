//31 - antecessor e sucessor 

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, antecessor, sucessor;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	printf("O antecessor � %d e o sucessor %d", antecessor, sucessor);
}
