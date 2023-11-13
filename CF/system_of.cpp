// system of equations 

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m, pair = 0;
//     cin >> n >> m;
//     int sum = n + m;

//     for (int i = 0; i < sum; i++) {
//         for (int j = 0; j < sum; j++) {
//             int e1 = pow(i, 2) + j; 
//             int e2 = pow(j, 2) + i; 
//             if (e1 == n && e2 == m) {
//                 pair++;
//             }
//         }
//     }
//     cout << pair << '\n';
//     return 0;
// }

// needa submit 

#include <iostream>

using namespace std;

int main() {
    // Input
    int n, m;
    cin >> n >> m;

    int count = 0;

    // Iterate through possible values of a and b
    for (int a = 0; a * a <= n; ++a) {
        int b = n - a * a;  // Calculate b from the first equation

        // Check if b is non-negative and satisfies the second equation
        if (b >= 0 && a + b * b == m) {
            count++;
        }
    }

    // Output the result
    cout << count << endl;

    return 0;
}
