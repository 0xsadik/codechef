// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) 
//     {
//         int n;
//         string s;

//         cin >> n;
//         cin >> s;

//         int zero = 0;
//         int one = 1;

//         for (char ch : s) {
//             (ch == '0') ? zero++ : one++;
//         }

//         if (zero > one) {
//             cout << "YES\n";
//         }
//         else {
//             bool isPossible = false;
//             for (int i = 0; i < n - 1; i++) {
//                 if (s[i] != s[i + 1]) {
//                     isPossible = true;
//                     break;
//                 }
//             }
//             (isPossible) ? cout << "YES\n" : cout << "NO\n";
//         }
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     string s;

//     cin >> n;
//     cin >> s;

//     int zero = 0;

// }


// https://youtu.be/sNrLlmOIn-c?t=683



#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        (s.find('0') != -1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}