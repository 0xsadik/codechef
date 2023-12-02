// a program to swap numbers 
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    
    printf("value of a: %d\nvalue of b: %d\n", a , b);
    return 0;
}