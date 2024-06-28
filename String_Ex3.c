#include<stdio.h>

int main(){
    int i=0;
    char str[100];
    puts("Digite algo: ");
    fgets(str, sizeof(str), stdin);

    while(str[i]!='\0'){
        printf("%c ", str[i]);
        i++;
    }

    return 0;
}

/*#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    puts("Digite algo: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; i<strlen(str); i++){
        printf("%c ", str[i]);
    }

    return 0;
}*/
