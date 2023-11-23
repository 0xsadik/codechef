// #include<iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     (x >= 12) ? cout << "YES\n" : cout << "NO\n";
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int t,s, twords;
//     cin >> t;
//     while(t--) {
//         cin >> s;
//         twords = 24 * 1000 * s;
//         cout << twords << '\n';
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t, x, y, n;
//     cin >> t;
//     while(t--) {
//         cin >> x >> y;

//         n = x + y;
//         (y <= (n / 2)) ? cout << n << '\n' : cout << n + 2 * (y - (n / 2)) - 1 << '\n';
//     }
// }


#include <iostream>

int main() {
    // Input the odd number N
    int N;
    std::cin >> N;

    // Check if N is odd
    if (N % 2 == 0) {
        std::cerr << "Please enter an odd number." << std::endl;
        return 1;
    }

    // Loop to create the fashionable drawing
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // Check if the current position is part of the X
            if (i == j || i + j == N - 1) {
                std::cout << "X";
            } else if (i == N / 2 || j == N / 2) {
                std::cout << "*";
            } else if (i < j && i + j < N - 1) {
                std::cout << "/";
            } else if (i > j && i + j > N - 1) {
                std::cout << "\\";
            } else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

