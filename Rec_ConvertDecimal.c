#include<stdio.h>
#include<stdlib.h>

void bin(int);

void hexa(int);

void octal(int);

int main(){
    int n, op;

    do{
        system("cls");
        puts("---Escolha o tipo de conversao decimal---\n");
        puts("1) Conversao para Binario");
        puts("2) Conversao para Hexadecimal");
        puts("3) Conversao para Octal");
        puts("0) Encerrar Programa");
        scanf("%d", &op);

        system("cls");

        if(op==0){
            break;
        }else if(op<1 || op>3){
            puts("Opcao invalida.\n");
            system("pause");
        }else{
            puts("Digite um numero decimal: ");
            scanf("%d", &n);

            system("cls");

            if(op==1){
                printf("%d convertido para binario e ", n);
                bin(n);
            }
            
            if(op==2){
                printf("%d convertido para hexadecimal e ", n);
                hexa(n);
            }
            
            if(op==3){
                printf("%d convertido para octal e ", n);
                octal(n);
            }

            puts("\n");
            system("pause");
        }

    }while(op!=0);

    return 0;
}

void bin(int n){
    if(n>1){
        bin(n/2);
    }
    printf("%d", n%2);
}

void hexa(int n){
    if(n==0){
        return;
    }
    hexa(n/16);
    int rest = n%16;

    if(rest>9){
        printf("%c", 'A'+rest-10);
    }else{
        printf("%d", rest);
    }
}

void octal(int n){
    if(n==0){
        return;
    }
    octal(n/8);
    printf("%d", n%8);
}