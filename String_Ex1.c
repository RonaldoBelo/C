#include<stdio.h>

int main(){
    char str[100];
    puts("Digite algo: ");
    fgets(str, sizeof str, stdin);
    puts(str);

    return 0;
}
