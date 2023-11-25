
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
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << '\n';
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << -1 << '\n';
    }
    return 0;
}