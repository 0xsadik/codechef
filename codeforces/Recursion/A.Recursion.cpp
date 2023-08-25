#include<bits/stdc++.h>
using namespace std;

void rec(int num) {
    if (num == 0) {
        return;
    }
    cout << "I love Recursion" << '\n';
    return rec(num - 1);
}

int main()
{
    int n; cin >> n;
    rec(n);

    return 0;
}