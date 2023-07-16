#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y, tmp;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if ( x < y) {
            cout << y - x << '\n';
        }
        else {
            cout << x - y << '\n';
        }
    }
    return 0;
}