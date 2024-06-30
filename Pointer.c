#include<stdio.h>

int main(){

    int num = 4;
    int* ptr = &num;

    printf("O endereco de num e: %p\n", &num);
    printf("O conteudo de num e: %d\n", num);
    printf("O endereco que ptr aponta e: %p\n", ptr);
    printf("O conteudo do endereco que ptr aponta e: %d\n", *ptr);

    return 0;
}
