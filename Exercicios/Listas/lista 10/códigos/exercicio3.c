#include <stdio.h>
#include <conio.h>

//3.	Fazer uma rotina que recebe um array do tipo double e o número de 
//valores que devem ser solicitados ao usuário e devolve o array preenchido com os valores digitados.

int carregar_vetor(int tf, int vet[tf]){
     int i, u;
     
     printf("digite quantos valores devem ser digitados: ");
     scanf("%d", &tf);
     
     for(i=0, u =1; i<tf; i++, u++){
              printf("\nDigite o valor %d: ", u);
              scanf("%d", &vet[i]); 
     }
     return(tf);
}

void exibir_vetor(int tf, int vet[tf]){
     
     int i; 
     
     system("cls");
     
     for(i=0; i<tf; i++){
             printf("\nVetor[%d] = %d\n", i, vet[i]);
    }
}

void main(){
     
     int tf, vet[tf];
     
     tf = carregar_vetor(tf, vet);
     exibir_vetor(tf, vet);
    
  
    
    system("pause");


}
