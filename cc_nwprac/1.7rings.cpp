// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     int first = num;
//     while(first >= 10) {
//         first /= 10;
//     }
//     cout << first << '\n';
// }


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, y, cnt;
        cin >> n >> y;
        int res = n * y;
        (res <= 99999 && res >= 10000) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}