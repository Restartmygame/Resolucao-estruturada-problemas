#include <stdio.h>
#include <conio.h>

#define TF 10

//7.	Escreva um algoritmo que leia dois vetores de 10 posições e faça a 
//multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

void carregar_vetores(int vet1[TF], int vet2[TF]){
      
      int i, u;
      
      for(i=0, u=1; i<TF; i++, u++){
              printf("Digite o %do valor do primeiro vetor: ", u);
              scanf("%d", &vet1[i]);
              printf("Digite o %do valor do segundo vetor: ", u);
              scanf("%d", &vet2[i]);
     
     }  



}

void multiplicar_vetores(int vet1[TF], int vet2[TF], int vetRES[TF]){
      
      int i;
      
      for(i=0; i<TF; i++){
              
              vetRES[i] = vet1[i] * vet2[i];
     
     }
}

void exibir_resultado_mult(int vetRES[TF]){
     
     int i;
     
     system("cls");
     for(i=0; i<TF; i++){
              printf("\nResult. mult. vetores[%d] = %d\n", i, vetRES[i]);
     }


}

void main(){

     int vet1[TF], vet2[TF], vetRES[TF];
     
     carregar_vetores(vet1, vet2);
     multiplicar_vetores(vet1, vet2, vetRES);
     exibir_resultado_mult(vetRES);
     
     system("pause");
}
