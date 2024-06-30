#include<stdio.h>
#include<string.h>

int main(){

    int i, j;
    char str[100], strdecosta[100];
    puts("Digite algo: ");
    fgets(str, sizeof(str), stdin);

    for(i=strlen(str)-2, j=0; i>=0; i--, j++){
        strdecosta[j]=str[i];
    }
    strdecosta[j] = '\0';
    puts(strdecosta);

    return 0;
}
