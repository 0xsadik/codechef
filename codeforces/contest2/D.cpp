// Range sum 

#include<iostream>
using namespace std;

int main()
{
    int t, sum = 0;
    cin >> t;

    while(t--) {
        int l, r;
        cin >> l >> r;

        for (int i = l; i <= r; i++) {
            sum += i;
        }
    }
    cout << sum << '\n';
}