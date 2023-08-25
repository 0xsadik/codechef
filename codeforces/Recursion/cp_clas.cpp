#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
using ll = long long;
int n, x, a[N];
ll sum1 = 0, sum2 = 0;

bool f(int i) {
    if (i == n + 1) {
        return sum1 - sum2  == x;
    }
    sum1 += a[i];
    bool ans = f(i + 1);
    sum1 -= a[i];
    sum2 += a[i];
    ans |= f(i + 1);
    return ans;
}

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}
