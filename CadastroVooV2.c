#include<stdio.h>

int vooCad(int numero, char origem[], char destino[], char data[], int passageiros, int voototal){
    FILE *arquivo;
    arquivo=fopen("CadastroVoo.txt", "a");
    fprintf(arquivo, "%d, %s, %s, %s, %d\n", numero, origem, destino, data, passageiros);
    fclose(arquivo);
}
struct Voo{
    int numero;
    char origem[100];
    char destino[100];
    char data[15];
    int passageiros;
};

int main(){
    Voo vooinfo[10];
    int op;

    switch(op){
        case 1:
            puts("Digite o numero do voo: ");
            scanf("%d", &vooinfo[cont].numero);
            puts("Digite a origem do voo: ");
            scanf(" %[^\n]", vooinfo[cont].origem);
            puts("Digite o destino do voo: ");
            scanf(" %[^\n]", vooinfo[cont].destino);
            puts("Digite a data do voo: ");
            scanf(" %[^\n]", vooinfo[cont].data);
            puts("Digite o numero de passageiros: ");
            scanf("%d", &vooinfo[cont].passageiros);

            vooCad();
    }


    return 0;
}
