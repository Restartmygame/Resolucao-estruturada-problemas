#include <stdio.h>
#include <conio.h>

#define TF 10

//1.	 Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valore lido.

void calcular_mai_men(int *maior, int *menor, int *vet, int i, int u){

     do{
        system("cls");
        printf("\nDigite o %do valor: ", u);
        scanf("%d", &vet[i]);
     
        if(u == 1){
            *maior = vet[i];
            *menor = vet[i];
        }
     
        if(vet[i] > *maior){
            *maior = vet[i];
        }
     
        if(vet[i] < *menor){
            *menor = vet[i];
        }
     
        i++;
        u++;
     }while(i < 10);

}


void main(){
     
     int maior, menor, vet[TF], i=0, u=1;
     
     calcular_mai_men(&maior, &menor, vet, i, u);
     
     system("cls");
     printf("\no maior numero eh %d ", maior);
     printf("\n\no menor numero eh %d\n\n", menor);
     
     system("pause");

}
