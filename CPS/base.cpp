#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    a = 4;
    b = 4;
    c = 4;
    d = 4;
    e = 6;

    int ans = a ^ b ^ c ^ d ^ e;
    cout << ans << '\n';

    return 0;
}