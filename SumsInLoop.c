#include<stdio.h>

int main(){
    int qtd;

    scanf("%d", &qtd);

    int num1[qtd], num2[qtd], sum[qtd];

    for(int i=0; i<qtd; i++){
        scanf("%d", &num1[i]);
        scanf("%d", &num2[i]);
        sum[i]=num1[i]+num2[i];
    }

    for(int i=0; i<qtd; i++){
        printf("%d ", sum[i]);
    }

    return 0;
}