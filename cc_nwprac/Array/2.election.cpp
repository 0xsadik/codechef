// elections in chefland 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] >= x) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}