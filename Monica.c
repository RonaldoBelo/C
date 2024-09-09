#include<stdio.h>

int main() {
    int M, A, B, C;

    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);

    C = M - A - B;

    int eldest = A;
    if (B > eldest) {
        eldest = B;
    }
    if (C > eldest) {
        eldest = C;
    }

    printf("%d\n", eldest);

    return 0;
}
