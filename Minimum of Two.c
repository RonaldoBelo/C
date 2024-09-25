#include<stdio.h>

int main(){
    int qtd;

    scanf("%d", &qtd);

    int A[qtd], B[qtd], C[qtd], min[qtd];

    for(int i=0; i<qtd; i++){
        scanf("%d %d %d", &A[i], &B[i], &C[i]);

        min[i]=A[i];
        if(min[i]>B[i]){
            min[i]=B[i];
        }
        if(min[i]>C[i]){
            min[i]=C[i];
        }
    }

    for(int i=0; i<qtd; i++){
        printf("%d ", min[i]);
    }

    return 0;
}