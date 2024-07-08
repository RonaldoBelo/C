#include<stdio.h>
void fmedia(int,int,float*);

int main(){
    int a, b;
    float media;

    puts("Digite um numero: ");
    scanf("%d", &a);
    puts("Digite um numero: ");
    scanf("%d", &b);
    fmedia(a, b, &media);
    printf("Media: %.2f", media);
}

void fmedia(int n1,int n2,float *mptr){
    *mptr=(n1+n2)/2.0;
}
