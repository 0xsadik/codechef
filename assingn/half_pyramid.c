// half pyramid of '*'

#include<stdio.h>

int main()
{
    // input row
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int star = 1; star <= i; star++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}