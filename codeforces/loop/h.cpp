// one prime 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, cnt = 0;
//     cin >> n;
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             cnt++;
//         }
//     }
//     if (cnt == 1) {
//         cout << "YES\n";
//     }
//     else {
//         cout << "NO\n";
//     }

//     return 0;
// }




//
// Created by tori on 13/8/23.
//


#include<iostream>
using namespace std;

int main()
{
    int num, div, cnt = 0;
    cin >> num;
    div = num / 2;
    for (int i = 2; i <= div; i++) {
        if (num % i == 0) {
            cout << "NO\n";
            cnt = 1;
            break;
        }
    }
    if (cnt == 0) {
        cout << "YES\n";
    }

    return 0;
};