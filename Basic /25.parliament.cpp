#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double x, n;
    cin >> t;
    while(t--) {
        cin >> n >> x;
        if (n >= (n +1)/2) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}