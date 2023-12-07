// bus seat numbering 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         int lowersingle = 0;
//         int uppersingle = 0;
//         for (int i = 1; i <= 30; i++) {
//             if (i <= 11 && i >= 15) {
//                 lowersingle++;
//             }
//             else if (i <= 26 && i >= 30) {
//                 uppersingle++;
//             }
//         }
//         if (lowersingle != 0) {
//             cout << "Lower Single\n";
//         }
//         else if (uppersingle != 0) {
//             cout << "Upper Single\n";
//         }
//         else if (lowersingle == 0) {
//             cout << "Lower Double\n";
//         }
//         else {
//             cout << "Upper Double\n";
//         }
//     }
// }




// second try 


#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if (n >= 1 && n <= 10) {
            cout << "Lower Double\n";
        }
        else if (n >= 11 && n <= 15) {
            cout << "Lower Single\n";
        }
        else if (n >= 16 && n <= 25) {
            cout << "Upper Double\n";
        }
        else {
            cout << "Upper single\n";
        }
    }
    return 0;
}

// problem : https://www.codechef.com/problems/SEATNUMBER?tab=statement
