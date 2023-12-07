// the last levels

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y, z, mul, mul2, dv, dv2, ans;
        dv = (x / 3) - 1;
        dv2 = (x / 3) * z;
        mul = x * y;
        mul2 = dv * z;

        if (x <= 3) {
            cout << mul << '\n';
        }
        else if (x % 3 == 0) {
            cout << mul2 + mul << '\n';
        }
        else {
            cout << dv2 + mul;
        }
        
    }
    return 0;
}