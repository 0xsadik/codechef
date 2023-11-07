// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 10; i++) {
//         if (i == 6) {
//             break;
//         }
//         cout << i << '\n';
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    for (int week = 1; week <= 4; week++) {
        cout << "Week = " << week << '\n';
        for (int day = 1; day <= 7; day++) {
            if (day == 6) break;
            cout << "\tDay = " << day << '\n';
        }
    }
    return 0;
}