
// searching 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long x; cin >> x;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << '\n';
        }
    }

    return 0;
}