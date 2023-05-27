#include <stdio.h>
#include <ctype.h>
#include "primo.h"

void menu(){
	int n, opt;
	char a;
	do{
		printf("(1) - Verificar se um numero eh ou nao primo\n(2) - Exibir os numeros primos entre 1 e 100\n(3) - Media dos numeros primos entre 200 e 100\n");
		printf("Escolha uma opcao:");
		scanf(" %d", &opt);
		switch(opt){
		case 1:
			printf("Informe um numero positivo: ");
			while(n<=0) scanf("%d", &n);
			(primo(n)==0)?printf("%d nao eh primo\n", n):printf("%d eh primo\n", n);
			n=0;
		break;
		case 2:
			for(int i=2; i<=100;i++){
				if(primo(i)){
					printf("%d", i);
					if(i!=97) printf(", ");
					else printf(".\n");
				}
			}
		break;
		case 3:
			for(int i=2; i<=200;i++){
				if(primo(i)){
					printf("%d", i);
					if(i!=199) printf(", ");
					else printf(".\n");
				}
			}
		break;
		default:
			printf("Opcao invalida! Pressione ENTER\n");
			scanf(" %c", &a);
		break;
		}
		printf("Deseja repetir o programa (S ou N)? ");
		scanf(" %c", &a);
	}while(toupper(a)=='S');
}

int main(){
	menu();
	return 0;
}
