// #include<stdio.h>
// int main()
// {
//     char m = 's';
//     printf("%c\n", m);

//     // character -> 
//     // format specifier -> %c 

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num1 = 101;
//     printf("%d\n", num1);

//     return 0;
// }


// # -> preprocessor 

// #include<stdio.h>
// .h -> header file extension 
// std  -> standard 
// i -> input 
// o -> output 
// <>

// int main() -> main function to execute a program






// data_type variable name = value;

/*
1. data type
2. variable name 
3. = ( assignment operator )
4. value;

*/


// #include<stdio.h>

// int main()
// {
//     float points = 0.00;
//     printf("%0.1lf \n", points);

//     return 0;
// }


#include<stdio.h>
int main()
{
    // block
    // Global type variable
    int i = 120;
    {
        // local scope 
        int j = 230;
        printf("%d\n", j);
    }

    printf("%d\n", i);
    

}

