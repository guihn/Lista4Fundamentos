#pragma once
int qnt_divisores(int num){
        int qnt=0;
        for(int i=num; i>0; i--) if(num%i==0) qnt++;
        return qnt;
}

int divisores(int num){
        int sum=0;
        for(int i=num; i>0; i--){
                if(num%i==0){
                        printf("%d ", i);
                        sum+=i;
                }
        }
        return sum;
}

void div_qnt_som_intervalo(int li, int ls){
        int sum=0;
        for(int i=li; i<=ls; i++){
                printf("%d - ", i);
                sum=divisores(i);
                printf(" => Qtde: %d => Soma: %d\n", qnt_divisores(i), sum);
        }
}

void mdc(int n1, int n2){
        int resto;
        int a=n1, b=n2;
            if (b > a) {
                int temp = n1;
                a = b;
                b = temp;
            }

            while (b != 0) {
                resto = a % b;
                a = b;
                b = resto;
            }
           printf("MDC(%d, %d) = %d\n", n1, n2, a);
}
