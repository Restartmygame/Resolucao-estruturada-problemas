#include <stdio.h>
#include <conio.h>

//Escreva uma fun��o que recebe a idade de um nadador por par�metro e retorna a categoria desse nadador de acordo com a tabela abaixo:   
//
//	Idade			Categoria
//	5 a 7 anos		Infantil A
//	8 a 10 anos		Infantil B
//	11-13 anos		Juvenil A
//	14-17 anos		Juvenil B
//	>= 18 anos		Adulto

char *retornar_categoria(int idade){
	
	if(idade >= 5 && idade <= 7){
		return "Infantil A";
	}else{
			if(idade >= 8 && idade <= 10){
			return "Infantil B";	
			}else{
				if(idade >= 11 && idade <= 13){
					return "Juvenil A";
				}else{
					if(idade >= 14 && idade <= 17){
						return"Juvenil B";
					}else{
						if(idade >= 18){
							return"Adulto";
						}
					}
				}
			
			}
		
		}
	
	}
}

void main(){
	
	int idade;
	
	printf("digite sua idade: ");
	scanf("d", &idade);
	printf("Categoria = %s", retorna_categoria(idade));
	
	
}
