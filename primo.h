#pragma once
#ifndef PRIMO_H
#define PRIMO_H
int primo(int n){
	int p=1;
	for(int i=2; i<=n; i++)
			if((n%i==0)&&n!=i) p=0;
	return p;
}
#endif
