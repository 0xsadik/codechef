// the three topics 

#include<iostream>
using namespace std;

int main()
{
    int a, b,  c, d;
    cin >> a >> b >> c >> d;
    (a == d || b == d || c == d) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}