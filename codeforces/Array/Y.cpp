#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, range;
    cin >> n >> range;

    long long arr1[n];
    long long arr2[n];
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
        if (i == 0) {
            arr2[i] = arr1[i];
        }
        else {
            arr2[i] = arr1[i] + arr2[i - 1];
        }
    }

    while(range--) {
        long long start, end;
        cin >> start >> end;
        start--;
        end--;
        long long sum = arr2[end] - arr2[start] + arr1[start];
        cout << sum << '\n';
    }
    return 0;
}