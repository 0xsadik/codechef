
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
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag++;
        }
    }

    return 0;
}