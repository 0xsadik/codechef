#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (y >= x && y <= (x + 200)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}