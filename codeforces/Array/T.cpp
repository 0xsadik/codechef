#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
 
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum1 += arr[i][j];
            }
            if (n - 1 - j == i) {
                sum2 += arr[i][j];
            }
        }
    }
    cout << abs(sum1 - sum2) << '\n';
 
    return 0;
}