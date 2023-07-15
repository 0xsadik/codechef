// The cheaper cab 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, y;
    cin >> t;
    while(t--) 
    {
        cin >> x >> y;
        if (x < y) {
            cout << "FIRST\n";
        }
        else if (x == y) {
            cout << "ANY\n";
        }
        else {
            cout << "SECOND\n";
        }
    }
    return 0;
}