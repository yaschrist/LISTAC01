#include <iostream>
#include <cctype>

main(){
	char letra, minuscula;
	printf("Digite um caractere em maiusculo: ");
	scanf("%c", &letra);
	minuscula = tolower(letra);
	printf("Letra em sua forma minuscula: %c", minuscula);
}
