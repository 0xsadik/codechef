#include<iostream>
using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    int mx, mi;
    mx = max(a, b);
    mx = max(mx, c);
    mi = min(a, b);
    mi = min(mi, c);
    cout << mi << " " << mx;

    return 0;
}