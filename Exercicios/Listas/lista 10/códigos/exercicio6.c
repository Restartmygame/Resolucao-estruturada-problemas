#include <stdio.h>
#include <conio.h>

#define TF 5

//6.	Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor 
//   elemento do vetor N e a sua posição dentro do vetor, mostrando: 
//   "O menor elemento de N é", M, "e sua posição dentro do vetor é:",P.

int main(){

     int i, u, N[TF], menor, pos_men;

     for(i=0, u=1; i<TF; i++, u++){
              printf("Digite o valor %d: ", u);
              scanf("%d", &N[i]);
              
              if(u == 1){//caso for a primeira leitura
                   menor = N[i];
                   pos_men = i;
              }
              
              if(N[i] < menor){ //se o valor digitado for o menor a variavel menor assume esse valor
                      menor = N[i];
                      pos_men = i;
              }
              
              
     }
     
     printf("O menor valor digitado eh '%d' e esta na posicao do vetor [%d]\n", menor, pos_men);
     system("pause");

     return 0;
}
