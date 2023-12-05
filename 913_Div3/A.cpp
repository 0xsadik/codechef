
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        string pos;
        cin >> pos;

        char col = pos[0];
        char row = pos[1];

        for (char i = 'a'; i <= 'h'; i++) {
            if (i != col) {
                cout << i << '\n';
            }
        }
        for (char j = '1'; j <= '8'; j++) {
            if (j != row) {
                cout << col << j << '\n';
            }
        }
    }
    return 0;
}