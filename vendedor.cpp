// 43 
#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float precoInicial, precoDescontado, precoParcelado, comissao, comissao2;
	
	printf("Digite o preço inicial: ");
	scanf("%f", &precoInicial);
	
	precoParcelado = precoInicial/3;
	precoDescontado = precoInicial - (precoInicial * 0.1);
	comissao = precoDescontado - (precoDescontado*0.95);
	comissao2 = precoInicial - (precoInicial*0.95);
	
	printf("Preço com desconto: %.2f\n", precoDescontado);
	printf("Valor das parcelas: %.2f\n", precoParcelado);
	printf("Comissão do vendedor Descontado: %.2f\n", comissao);
	printf("Comissão do vendedor Parcelado: %.2f", comissao2);
	
	
}
