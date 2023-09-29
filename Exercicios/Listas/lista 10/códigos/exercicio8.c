#include <stdio.h>
#include <conio.h>

#define TF 30

//8.	Faça um algoritmo que leia um vetor K[30]. Troque a seguir, 
//todos os elementos de ordem ímpar do vetor com os elementos de ordem par imediatamente posterior.

void carregar_vetor(int k[TF]){
      
      int i, u;
      
      for(i=0, u=1; i<TF; i++, u++){
              printf("Digite o %do valor do vetor: ", u);
              scanf("%d", &k[i]); 
     }
}

void inverter_par_impar(int k[TF], int aux){

     int i;
     
     for(i=0; i<TF-1; i+=2){
              aux = k[i];
              k[i] = k[i + 1];
              k[i + 1] = aux;
     }
}

void exibir_vetor(int k[TF]){
     
     int i;
     
     system("cls");
     printf("exibindo vetores com os elementos de ordens par e ímpar trocados!!");
     for(i=0; i<TF; i++){
              printf("\nVetor[%d] = %d\n", i, k[i]);
     
     } 
}


void main(){

     int k[TF], aux;
     
     carregar_vetor(k);
     inverter_par_impar(k, aux);
     exibir_vetor(k);
     
     
     

     system("pause");

}
