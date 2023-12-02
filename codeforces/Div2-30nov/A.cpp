// Halloumi Boxes 

#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

bool nextsort(int a[], int n, int k) {
    if (sorted(a, n)) {
        return true;
    }
    for (int i = 0; i + k <= n; i++) {
        for (int j = i; j < i + k; j++) {
            int tmp = a[j];
            a[j] = a[i + k - 1 - j];
            a[i + k - 1 - j] = tmp; 
        }
        if (nextsort(a, n, k)) {
            return true;
        }
        for (int j = i; j < i + k; j++) {
            int tmp = a[j];
            a[j] = a[i + k - 1 - j];
            a[i + k - 1 - j] = tmp;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (nextsort(a, n, k)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}



