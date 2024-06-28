#include<stdio.h>

int main(){
    int cont=0;
    char str[100];
    puts("Digite algo: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; i<sizeof str; i++){
        if(str[i]!='\0'){
            cont++;
        }else{
            break;
        }
    }
    printf("O tamanho da palavra e: %d", cont-1);

    return 0;
}
