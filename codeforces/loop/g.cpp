#include<iostream>
using namespace std;

int main()
{
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        long long ft = 1;
        for (int i = 1; i <= n; i++) {
            ft *= i;
        }
        cout << ft  << endl;
    }
}