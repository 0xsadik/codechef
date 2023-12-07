// x jumps 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;

        int sum = (x * y - 1) / y;
        cout << sum << '\n';
    }
    return 0;
}