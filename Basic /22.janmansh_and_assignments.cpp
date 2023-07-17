#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while(t--) {
        cin >> x;
        if (10 - x >= 3) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}