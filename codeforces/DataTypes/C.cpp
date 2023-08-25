
#include<iostream>
using namespace std;
 
int main()
{
    long long x, y, add, mul, sub; cin >> x >> y;
    add = x + y;
    mul = x * y;
    sub = x - y;
    cout << x << " + " << y << " = " << add << '\n';
    cout << x << " * " << y << " = " << mul << '\n';
    cout << x << " - " << y << " = " << sub << '\n';
 
    return 0;
}