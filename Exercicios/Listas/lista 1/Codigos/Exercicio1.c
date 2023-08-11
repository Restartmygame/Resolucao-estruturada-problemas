#include <stdio.h>
#include <conio.h>

void main(){
	
	//1.	Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.
	
	float raio, area;
	
	printf(">>>>calcula a area do circulo<<<<<");
	printf("\nInforme o Raio de um circulo: ");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("Area do circulo: %0.2f", area);
	


}
