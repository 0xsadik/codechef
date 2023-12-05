// Insert an equalize 

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll arr[n], c = 1, b = 0, ans, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; i++) {
            b = __gcd(b, arr[i] - arr[i - 1]);
        }
        for (int i = 0; i < n; i++) {
            sum += (arr[n - 1] - arr[i] / b);
        }
        ans = arr[n - 1] - b;
        for (int i = n - 2; i >= 0; i--) {
            if (ans != arr[i]) {
                break;
            }
            ans -= b;
            c++;
        }
        cout << sum + c << '\n';
    }
    return 0;
}