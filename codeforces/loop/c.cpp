// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     int even = 0;
//     int odd = 0;
//     int positive = 0;
//     int negative = 0;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for(int l = 0; l < n; l++) {
//         if (arr[l] % 2 == 0) {
//             even++;
//             if (arr[l] >= 0) {
//                 positive++;
//             }
//             else {
//                 negative++;
//             }
//         }
//         else {
//             odd++;
//         }
//     }
//     cout << even << endl;
//     cout << odd << endl;
//     cout << "negative: " << negative << endl;
//     cout << "positive: " << positive << endl;

//     return 0;

// }




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < n; i++ ) {
        cin >> num;
        if (num % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
        if (num > 0) {
            positive++;
        }
        else if (num < 0) {
            negative++;
        }
    }
    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << positive << '\n';
    cout << "Negative: " << negative << '\n';
}