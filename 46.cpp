#include <iostream>
#include <locale.h>
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, cent, dez, uni;
	
	printf("Digite um número de 3 digitos: ");
	scanf("%d", &n);
	
	cent = n / 100;
	dez = (n % 100) / 10;
	uni = (n % 10) % 10;
	
	printf("Número ao contrário: %03d", cent + dez * 10 + uni * 100);
}
