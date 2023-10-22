// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     bool  a = 23 > 21;
//     printf("%d\n", a);

//     return 0;
// }



// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     bool  a = 23 < 21;
//     printf("%d\n", a);

//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 23;
//     bool  comp = b < a;
//     printf("%d\n", comp);

//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 23;
//     bool  comp = a < b;
//     printf("%d\n", comp);

//     return 0;
// }



// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 23, b = 23;
//     bool  comp = a == b;
//     printf("%d\n", comp);

//     return 0;
// }



// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 23, b = 22;
//     bool  comp = a >= b;
//     printf("%d\n", comp);

//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int marks = 88, aplus = 80;
//     bool  comp = (marks >= aplus);

//     if (comp) {
//         printf("I am GPA 5\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int pweight = 55;
//     bool  comp = (pweight >= 45 && pweight <= 70);

//     if (comp) {
//         printf("Congratulations! you'll be able to participate.\n");
//     }
//     else {
//         printf("Sorry! buddy, you can't participate\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int pweight = 55;

//     if (pweight >= 45 && pweight <= 70) {
//         printf("Congratulations! you'll be able to participate.\n");
//     }
//     else {
//         printf("Sorry! buddy, you can't participate\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int pweight = 71;

//     if (pweight < 45) {
//         printf("you've got low weight bruh!\n");
//     }
//     else if(pweight > 70) {
//         printf("you've got over weight bruh\n");
//     }
//     else {
//         printf("Ah! finally you can participate bruh!\n");
//     }

//     return 0;
// }


#include<stdint.h>
#include<stdbool.h>

int main()
{
    int marks = 43;
    if (marks > 80) {
        printf("wow! you've got A+\n");
    }
    else if (marks >  70) {
        printf("you've got A\n");
    }
    else if (marks > 60) {
        printf("you've got B+\n");
    }
    else if (marks > 50) {
        printf("you've got B\n");
    }

    return 0;
}

