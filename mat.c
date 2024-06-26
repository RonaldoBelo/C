#include<stdio.h>
int main(){
    int numero_a, numero_b, multi, div, ad, sub;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero_a);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero_b);
    multi = numero_a*numero_b;
    div = numero_a/numero_b;
    ad = numero_a+numero_b;
    sub = numero_a-numero_b;
    printf("\nO resultado da multiplicacao e: %d",multi);
    printf("\nO resultado da divisao e: %d",div);
    printf("\nO resultado da adicao e: %d",ad);
    printf("\nO resultado da subtraçao e: %d",sub);
}
