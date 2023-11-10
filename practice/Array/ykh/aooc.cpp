// array out of count 


//. ::: ❌ the wrong way :::

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n; cin >> n;
//     int a[n];
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }
//     // output loop
//     for (int i = 1; i <= n; i++) {
//         cout << a[i] << ' ';
//     }
//     return 0;
// }


// ✅ the right way

#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1]; 
    for (int i = 1; i <= n; i++ ) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }

    return 0;
}