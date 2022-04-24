//7 - temperatura

#include <iostream>

main() {
	float celsius, fh;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&fh);
	
	celsius = 5 * (fh - 32)/9;
	printf("Temperatura em Celsius: %.2f", celsius);
}
