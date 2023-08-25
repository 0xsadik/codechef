// #include<bits/stdc++.h>
// using namespace std;

// void rout(int n) {
//     for (int i = 1; i < n; i++) {
//         cout << i << " ";
//     }
//     cout << n;
// }

// int main () 
// {
//     int n;
//     cin >> n;
//     rout(n);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// void print(int n) {
//     for (int i = 1; i < n; i++) {
//         cout << i << " ";
//     }
//     cout << n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     print(n);
//     return 0;
// }


#include<iostream>
using namespace std;

void print(int n) {
    if (n == 0)  {
        return;
    }
    cout << n << " ";
    print(n - 1);
}

int main() 
{
    int n; cin >> n;
    print(n);
    
    return 0;
}