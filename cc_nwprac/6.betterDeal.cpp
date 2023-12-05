// better deal

#include<iostream>
using namespace std;

int main()
{
    int t, p, q;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        p = 100 - a;
        q = 200 - (b * 2);
        if (p < q) {
            cout << "FIRST\n";
        }
        else if (q < p) {
            cout << "SECOND\n";
        }
        else {
            cout << "BOTH\n";
        }
    }
    return 0;
}