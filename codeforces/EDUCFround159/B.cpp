// Getting points

#include<bits/stdc++.h>
using namespace std;
#define int long long

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, p, l, t;
        cin >> n >> p >> l >> t;

        int task = (n - 1) / 7 + 1;
        int res = max(( p - 1 ) / ( l + 2 * t ) + 1 , ( p - t * task - 1 ) / l + 1 );
        cout << n - res << '\n';
    }
    return 0;
}