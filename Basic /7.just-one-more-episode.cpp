// just one more episode 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x    ;
    cin >> t;
    while(t--){
        cin >> x;
        if (x > 24) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}