#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;

    while(t--) {
        cin >> n >> m;
        if (n <= (m * 6 * 6)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}