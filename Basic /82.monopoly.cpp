// 578 difficulty 

#include<iostream>
using namespace std;
int main()
{
    int t, p, q, r, s, a, b, c, d;
    cin >> t;
    while(t--) {
        cin >> p >> q >> r >> s;
        a = q + r + s;
        b = p + r + s;
        c = q + p + s;
        d = q + r + p;
        if (a < p || b < q || c < r || d < s) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    return 0;
}