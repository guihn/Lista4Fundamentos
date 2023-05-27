#include <stdio.h>
#include <ctype.h>
#include "divisores.h"

void menu(){
	int p=0, n=0;
	printf("(1) - Quantidade de divisores de um numero.\n");
	printf("(2) - Divisores de um numero.\n");
	printf("(3) - Divisores, quantidade e soma de um intervalo.\n");
	printf("(4) - Maximo Divisor Comum de dois numeros.\n");
	while(p!=1&&p!=2&&p!=3&&p!=4){
		printf("Escolha uma opcao: ");
		scanf("%d", &p);
		if(p==1&&p==2&&p==3&&p==4) printf("Opcao Invalida!\n");
	}
	switch(p){
		case 1:
		while(n<=0){
			printf("Informe um numero: ");
			scanf("%d", &n);
			if(n<=0) printf("Numero invalido\n");
		}
		printf("O numero %d possui %d divisores\n",n, qnt_divisores(n));
		n=0;
		break;
		case 2:
		while(n<=0){
			printf("Informe um numero: ");
			scanf("%d", &n);
			if(n<=0) printf("Numero invalido\n");
		}
		divisores(n);
		printf("\n");
		n=0;
		break;
		case 3:
		int li=0, ls=0;
		while(li<=0){
			printf("Informe o limite inferior: ");
			scanf("%d", &li);
			if(li<=0) printf("Numero invalido!\n");
		}
		while(ls<=0||ls<=li){
			printf("Informe o limite superior: ");
			scanf("%d", &ls);
			if(li<=0||ls<=li) printf("Numero invalido!\n");
		}		
		div_qnt_som_intervalo(li, ls);
		break;
		case 4:
		int a=0,b=0;
		while(a<=0){
			printf("Informe um numero: ");
			scanf("%d", &a);
			if(a<0){
				printf("Sera utilizado o modulo desse numero\n");
				a*=-1;
			}
		}
		while(b<=0){
			printf("Informe outro numero: ");
			scanf("%d", &b);
			if(b<0){
				printf("Sera utilizado o modulo desse numero\n");
				b*=-1;
			}
		}
		mdc(a, b);
		break;
	}
}
int main(){
	char c;
	do{
		menu();
		printf("Deseja repetir o programa?");
		scanf(" %c", &c);
	}while(toupper(c)=='S');
	return 0;
}
