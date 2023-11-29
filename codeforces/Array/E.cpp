// lowest number 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int m = INT_MAX;
//     for(int i = 1; i <= n; i++) {
//         cin >> arr[i];
//         m = min (m, arr[i]);
//         if (arr[i] == m) {
//             cout << arr[i] << ' ' << i;
//             break;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n];
    int mipos = A[0];
    int mindx = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];

        if (A[i] < mipos) {
            mipos = A[i];
            mindx = i;
        }
    }
    cout << mipos << ' ' << mindx + 1 << '\n';

    return 0;

}