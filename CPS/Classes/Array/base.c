// #include<stdio.h>
// int main()
// {
//     int a[10];
//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     a[3] = 4;
//     a[4] = 5;

//     printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
//     a[4] = 10;
//     printf("%d\n", a[4]);
//     a[4] = a[2];
//     printf("%d\n", a[4]);

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &a[i]);
//     }

//     for(int i = 0; i < 10; i++) {
//         printf("%d\n", a[i]);
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a[10];
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &a[i]);
//     }

//     int sum = 0;
//     for(int i = 0; i < 10; i++) {
//         sum += a[i];
//     }
//     printf("%d\n", sum);

//     return 0;
// }




// #include<stdio.h>

// // int mx = 10000;
// // int a[mx];

// int main()
// {
//     int a = 1e5;
//     printf("%d\n", a);   

//     return 0;
// }


// #include<stdio.h>

// const int mx = 1e5;


// int main()
// {
//     int a[mx];
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int ans = a[1];
//     for (int i = 2; i <= n; i++) {
//         if (a[i] > a[i - 1]) {
//             ans = a[i];
//         }
//         else break;
//     }
//     printf("%d\n", ans);


//     return 0;
// }



#include<stdio.h>

int a[12];
int cnt[123];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i <= n; i++) {
        cnt[a[i]]++;
    }

    return 0;
}