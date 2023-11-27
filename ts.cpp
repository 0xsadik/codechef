// #include<iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     (x >= 12) ? cout << "YES\n" : cout << "NO\n";
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int t,s, twords;
//     cin >> t;
//     while(t--) {
//         cin >> s;
//         twords = 24 * 1000 * s;
//         cout << twords << '\n';
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, x, y, n;
//     cin >> t;
//     while(t--) {
//         cin >> x >> y;

//         n = x + y;
//         (y <= (n / 2)) ? cout << n << '\n' : cout << n + 2 * (y - (n / 2)) - 1 << '\n';
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int n, i;
//     n = 5;
//     while(i <=  10) {
//         printf("%d x %d = %d\n", n, i, n * i);
//         i++;
//     }
//     return 0;
// }


// permutation kinda stuff

// #include<stdio.h>
// int main()
// {
//     int a, b, c;
//     for (a = 1; a <= 3; a++){
//         for (b = 1; b <= 3; b++) {
//             for (c = 1; c <= 3; c++) {
//                 printf("%d, %d, %d\n", a, b, c);
//             }
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()

// {
//     int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
//     int ara2[10];
//     int i, j;
//     for (i = 0, j = 9; i < 10; i++, j--) {
//         ara2[j] = ara[i];
//     }
//     for (i = 0; i < 10; i++) {
//         ara[i] = ara2[i];
//     }
//     for (i = 0; i < 10; i++) {
//         printf("%d\n", ara[i]);
//     }

//     return 0;
// }





#include<stdio.h>

double add(double n1, double n2) {
    double sum = n1 + n2;
    return sum;
} 

int main()
{
    double a, b, c;
    a = b = 2.5;
    c = add(a, b);
    
    printf("%0.2lf\n", c);
    return 0;
}