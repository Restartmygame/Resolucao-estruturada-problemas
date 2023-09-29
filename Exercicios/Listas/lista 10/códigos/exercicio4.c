#include <stdio.h>
#include <conio.h>

#define TF 10
//4.	Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e 
//   verifica se algum dos valores é igual à média dos mesmos

void carregar_vetor(int vet[TF], int *soma){
     
     int i, u;
     
     for(i=0, u=1; i < TF; i++, u++){
              printf("Digite o valor %d: ", u);
              scanf("%d", &vet[i]);
              
              *soma = *soma + vet[i];
     
     }
     

}

int operacoes_media(int vet[TF], int soma, int *media){
     
     int i, u, iguais=0;

     *media = soma / TF;
     
     for(i=0; i<TF; i++){
              if(vet[i] == *media){
                        printf("\num dos valores do vetor eh igual a media!!!\n");
                        printf("\nesse valor eh o %d e esta na posicao %d\n", vet[i], i);
                        iguais++;
              }  
     }

     return(iguais);
}

void main(){

     int iguais=0, vet[TF], soma=0, media;
     
     carregar_vetor(vet, &soma);
     iguais = operacoes_media(vet, soma, &media);
     
     
     if(iguais == 0){
               printf("\nnenhum valor do vetor eh igual a media de seus elementos\n");
     
     }
     
     system("pause");


}
