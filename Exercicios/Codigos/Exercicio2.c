#include <stdio.h>
#include <conio.h>


	//2.	Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), 
	//calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não 
	//será descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2.


void main(){
	
	float compr, larg, alt, area_paredes_maior, area_paredes_menor, area_completa, quant;
	
	printf("Escreva o comprimento da cozinha: ");
	scanf("%f", &compr);
	printf("Escreva a largura da cozinha: ");
	scanf("%f", &larg);
	printf("Escreva a altura da cozinha: ");
	scanf("%f", &alt);
	
	area_paredes_maior = (compr * alt) * 2;
	area_paredes_menor = (larg * alt) * 2;
	
	area_completa = area_paredes_maior + area_paredes_menor;
	
	quant = area_completa / 1.5;
	
	printf("\nArea total: %0.2fm2\n\n>>>Sera necessario %0.2f caixas<<<",area_completa, quant);
	
	
	
	
	
	
	
	
	
	
}
