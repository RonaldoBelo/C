#include<stdio.h>

int main(){

    int result, D, E;

    scanf("%d", &E);
    scanf("%d", &D);

    if(E>D){
        result=D+E;
    }else{
        result=(D-E)*2;
    }
    printf("%d", result);
}
