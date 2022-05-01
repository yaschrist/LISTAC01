#include <iostream>
#include <locale.h>

//using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float horas, min, seg;
	printf("Digite um valor em segundos: ");
	scanf("%f", &seg);
	horas = seg / 3600;
	min = (seg - (horas * 3600)) / 60;
	seg = seg - (horas * 3600) - (min * 60);
	printf("Horas: %.1f\n", horas);
	printf("Minutos: %.1f\n", min);
	printf("Segundos: %.1f\n", seg);
	
	
}

