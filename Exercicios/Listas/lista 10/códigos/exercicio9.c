#include <stdio.h>
#include <conio.h>

#define TF 10

//9.	Escreva um algoritmo que leia 50 valores para um vetor de 50 posições. Mostre depois somente os positivos.

void carregar_vetor(int vet[TF]){
     
     int i, u;
     
     for(i=0, u=1; i<TF; i++, u++){
              printf("Digite o valor %d: ", u);
              scanf("%d", &vet[i]);
     }


}

void exibir_vetor_positivo(int vet[TF]){
     
     int i, u;
     
     system("cls");
     printf("Exibindo apenas os numeros positivos!!!\n\n");
     
     for(i=0, u=1; i<TF; i++, u++){
              
              if(vet[i] >= 0){
                        printf("Vetor[%d] = %d\n", i, vet[i]);
              }
     
     }


}




void main(){
     
     int vet[TF];
     
     carregar_vetor(vet);
     exibir_vetor_positivo(vet);
     
     

     system("pause");

}
