//41 - salario

#include <iostream>

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorHora, horasTrabalhadas, resultado;
	
	printf("Valor da hora: ");
	scanf("%f", &valorHora);
	
	printf("Horas trabalhadas: ");
	scanf("%f", &horasTrabalhadas);
	
	resultado = (valorHora * horasTrabalhadas) + ((valorHora * horasTrabalhadas) * 0.10);
	
	printf("O resultado é: %.2f", resultado);
}
