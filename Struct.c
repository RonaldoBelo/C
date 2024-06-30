#include<stdio.h>

struct Cadastro{
    char nome[30];
    int idade;
    float saldo;
};


int main(){
    struct Cadastro client1;

    puts("Digite seu nome: ");
    fgets(client1.nome, sizeof(client1.nome), stdin);
    puts("Digite sua idade: ");
    scanf("%d", &client1.idade);
    puts("Digite seu saldo: ");
    scanf("%f", &client1.saldo);

    printf("\nNome: %s", client1.nome);
    printf("Idade: %d\n", client1.idade);
    printf("Saldo: %.2f", client1.saldo);


    return 0;
}
