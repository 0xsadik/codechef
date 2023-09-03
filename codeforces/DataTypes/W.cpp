#include<iostream>
using namespace std;

int main()
{
    int a, b, c, ans;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    ans = a + b;
    if (s == '+' && q == '='){
        if (a + b != ans) {
            cout << ans << '\n';
        }
        else {
            cout << "Yes\n";
        }
    }
}