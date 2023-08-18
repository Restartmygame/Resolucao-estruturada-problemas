#include <stdio.h>
#include <conio.h>

//3.	Escreva uma função que receba 2 parametros (Nota1 e Nota2) calcule e retorne a média.

float calcular_media(float n1, float n2){
	
	float media;
	
	media = (n1 + n2) / 2;
	
	return media;
	
	
	
}


void main(){
	
	float n1, n2, media;
	
	printf("Calculador de media de duas notas\n\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media = calcular_media(n1, n2);
	
	system("cls");
	printf("\n\n");
	printf("a media entre essas duas notas eh %0.2f\n", media);
	
	
}
