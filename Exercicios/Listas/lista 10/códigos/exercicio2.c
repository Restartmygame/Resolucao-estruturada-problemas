#include <stdio.h>
#include <conio.h>

#define TF 5

//2.	Fazer uma rotina que recebe como parâmetro um array de 5 posições 
//   contendo as notas de um aluno ao longo do ano e devolve a média do aluno.

void calcular_media(float soma){

     float media;

     media = soma / TF;
     
     printf("a media dessas notas eh %0.2f\n", media);
     system("pause");

}


void carregar_vetor(float vet[TF], float *soma){
     
     int u, i;
     
     system("cls");
     for(i=0, u=1; i<TF; i++, u++){
              printf("Digite a nota %d: ", u);
              scanf("%f", &vet[i]);
              
              *soma += vet[i];
     }

}


void main(){

     float vet[TF], media, soma;
     int rot;
     
     
     do{
     carregar_vetor(vet, &soma);
     calcular_media(soma);
     soma = 0;
     system("cls");
     printf("Deseja calcular outra media?(1= Sim, 0 = Nao)\n");
     scanf("%d", &rot);
     }while(rot != 0);
    
}
