// discus throw 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int mx = max({a, b, c});
//         cout << mx << '\n';
//     }
// }


#include<iostream>
using namespace std;

int main()
{
    int t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b && a > c || b > a && b > c || c > a && c > b) {
            cout << a << '\n' << b << '\n' << c << '\n';
        }
    }
}