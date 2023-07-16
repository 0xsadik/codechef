#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        if (x % 3 == 0) {
            cout << 0 << endl;
        }
        else if ((x + 1) % 3 == 0) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
}