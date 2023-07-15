#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while(t--) {
        cin >> a >> c;
        if (a % 2 == 0 && c % 2 == 0) {
            b = (a + c) / 2;
            cout << b << '\n';
        }
        else if (a % 2 != 0 && c % 2 != 0){
            b = (a + c) / 2;
            cout << b << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}