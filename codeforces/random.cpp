#include<iostream>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        (a + b >= 10 || a + c >= 10 || b + a >= 10 || b + c >= 10 || c + a >= 10 || c + b >= 10) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}