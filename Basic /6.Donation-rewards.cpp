// Donation rewards 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while(t--) {
        cin >> x;
        if (x <= 3) {
            cout << "BRONZE\n";
        }
        else if(x <= 6) {
            cout << "SILVER\n";
        }
        else  {
            cout << "GOLD\n";
        }
    }
    return 0;
}