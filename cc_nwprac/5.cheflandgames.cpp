// chefland games 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        (a == 0 && b == 0 && c == 0 && d == 0) ? cout << "IN\n" : cout << "OUT\n";
    }
}