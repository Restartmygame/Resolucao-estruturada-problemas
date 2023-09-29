#include <stdio.h>
#include <conio.h>

#define TF 500
//10.	Faça um algoritmo que leia um vetor de 500 posições de números e divida 
//    todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

float carregar_vetor(int vet[TF], float maior_float){
     int i, u, maior;
     
     for(i=0, u=1; i<TF; i++, u++){
              printf("\nDigite o valor %d: ", u);
              scanf("%d", &vet[i]);
              
              if(u == 1){
                   maior = vet[i];
              }
              
              if(vet[i] > maior){
                        maior = vet[i];
              }
              
     
     }
     maior_float = (float)maior;
     
     return(maior_float);


}

void exibir_vetor_dividido_pelo_maior(int vet[TF], float maior_float){
     int i, u, auxilio_int_to_float;
     float ivet_float, div;
     
     system("cls");
     printf("todos os elementos do vetor serao divididos pelo seu maior elemento!!!\n\n");
     printf("aperte qualquer botao para exibir o vetor\n");
     
     system("pause");
     
     printf("exibindo o vetor por inteiro!!!\n");
     
     
     for(i=0; i<TF; i++){
              auxilio_int_to_float = vet[i];
              ivet_float = (float)auxilio_int_to_float;
              
              div = ivet_float / maior_float;
              vet[i] = div;
              
              printf("Vetor[%d] = %0.3f\n", i, div);
     
     }


}


void main(){

     int vet[TF];
     float maior_float;
     
     maior_float = carregar_vetor(vet, maior_float);
     exibir_vetor_dividido_pelo_maior(vet, maior_float);
     
    
     
     system("pause");
}
