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


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n; j++) {
            if (i == j && i != n / 2 && j != n / 2) {
                cout << "\\";
            }
            else if (i == n / 2 && j == n / 2 ) {
                cout << "X";
            }
            else if (j != n  / 2 && i == ((n )))
        }
    }
}

