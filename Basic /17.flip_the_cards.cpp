#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        int minim = (x == 0 || x == n) ? 0 : min(x, n - x);
        cout << minim << endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, n, x;
//     cin >> t;
//     while(t--) {
//         cin >> n >> x;
//         if (x == 0 && x == n) {
//             cout << 0 << endl;
//         }
//         else {
//             cout << min(x, n-x) << endl;
//         }
//     }
//     return 0;
// }