
// Instagram 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if (x > (y * 10) ) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}