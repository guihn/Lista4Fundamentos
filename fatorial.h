#pragma once

void fatorial(int n){
	int aux=1;
	printf("%d! ", n);
	for(int i=n; i>0; i--){
		printf("%d",i);
		aux*=i;
		if(i!=1) printf(" * ");
	}
	printf(" = %d\n", aux);
}
