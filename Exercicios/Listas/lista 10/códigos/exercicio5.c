#include <stdio.h>
#include <conio.h>

#define TF 5
#define VAL 10

//5.	Elaborar um algoritmo que lê um conjunto de 30 valores e os colocar em 
//2 vetores conforme estes valores forem pares ou ímpares. O tamanho do vetor é 
//de 5 posições. Se algum vetor estiver cheio, escrevê-lo. Terminada a leitura 
//escrever o conteúdo dos dois vetores.

void carregar_vetores(){
     
     int u, v=0, i1=0, i2=0, vet1[TF], vet2[TF];
     
     for(u=1; u<=VAL ; u++){
     printf("\nEscreva o valor %d: ", u);
     scanf("%d", &v);
                 
                 if(i2 < TF){//verifica se o vetor ja passou de 5 posições
                       if(v %2 == 0){//verifica quando o vetor eh par e coloca na proxima posição do vetor
                            vet2[i2] = v;
                            i2++;
                            printf("Registrado no vetor 2!!!\n"); 
                            }
                 }
                 
                 if(i2 == TF){ //avisa quando o vetor 2 está cheio
                       printf("Vetor 2 cheio!!!");
                       i2++;
                 }
                 
                 
                 if(i1 < TF){//verifica se o vetor ja passou de 5 posições
                       if(v %2 != 0){//verifica quando o vetor eh impar e coloca na proxima posição do vetor
                            vet1[i1] = v;
                            i1++;
                            printf("Registrado no vetor 1!!!\n"); 
                            }
                 }
                 
                 if(i1 == TF){ //avisa quando o vetor 1 está cheio
                       printf("Vetor 1 cheio!!!");
                       i1++;
                 
                 }
     
     }


}

void exibir_vetores(){
     
     int u, v=0, i1=0, i2=0, vet1[TF], vet2[TF];
     
     //exibir vetores
     
     for(i2=0; i2<TF; i2++){
              printf("\nVetor2[%d] = %d\n",i2, vet2[i2]);
     }
     
     system("pause");
     
     for(i1=0; i1<TF; i1++){
               printf("\nVetor1[%d] = %d\n",i1, vet1[i1]);       
     }


     system("pause");


}

void main(){
     
     
     
     carregar_vetores();
     exibir_vetores();
     
     
     


} 
