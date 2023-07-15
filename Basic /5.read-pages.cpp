// read pages 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         if (x * y >= n) {
//             cout << "YES\n";
//         }
//         else {
//             cout << "NO\n";
//         }
//         t--;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        if (x * y >= n) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}