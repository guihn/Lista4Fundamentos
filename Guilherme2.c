#include <stdio.h>
#include <ctype.h>
#include "fatorial.h"

void menu(){
	int p=0;
	printf("(1) - Fatorial dos numeros entre 1 e 8\n");
	printf("(2) - Fatorial de um numero positivo\n");
	while(p<=0){
		printf("Escolha uma opcao:");
		scanf("%d", &p);
		if(p<=0) printf("Opcao Invalida!");
	}
	switch(p){
		case 1:
		for(int i=1; i<=8;i++) fatorial(i);
		break;
		case 2:
		int num=0;
		while(num<=0){
			printf("Informe um numero positivo: ");
			scanf("%d", &num);
			if(num<=0) printf("Valor Invalido!");
		}
		fatorial(num);
		break;
	}
}

int main(){
	char a;
	do{
		menu();
		printf("Deseja repetir o programa?");
		scanf(" %c", &a);
	}while(toupper(a)=='S');
	return 0;
}
