// board moves 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        long long result = 0;
        for (long long i = 1; i <= n / 2; i++) {
            result += (2 * i + 1) * i;
            result += (2 * i + 1) * i;

            result += (2 * i + 1 - 2) * i;
            result += (2 * i + 1 - 2) * i;
        }
        cout << result << '\n';
    }
    return 0;
}