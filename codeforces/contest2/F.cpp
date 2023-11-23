// Break Number 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; 
//     cin >> n;

//     int mf = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;

//         int f = 0;
//         while(x % 2 == 0) {
//             x /= 2;
//             f++;
//         }
//         mf = max(mf, f);
//     }
//     cout << mf << '\n';

//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    int mf = 0;
    while(t--) {
        int x;
        cin >> x;

        int f = 0;
        while(x % 2 == 0) {
            x /= 2;
            f++;
        }
        mf = max(mf, f);
    }
    cout << mf << '\n';

    return 0;
}