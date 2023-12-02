// program to check  a number even or odd!

#include<stdio.h>

int main()
{
    // input a number 
    int n;
    scanf("%d", &n);
    // let's check that number
    if (n % 2 == 0){
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }

    return 0;
}