// some sums 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, a, b, sum = 0, tsum = 0;
//     cin >> n >> a >> b;

//     int num = 0;
//     while(num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
    
//     for (int i = 1; i <= n; i++) {
//         if (num >= a && num <= b) {
//             tsum += i;
//         }
//     }
//     cout << tsum << '\n';
// }



#include<iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int s = i, sum= 0;
        while(s > 0) {
            int s2 = s % 10;
            s += s2;
            s /= 10;
        }
        if (s >= a && s <= b) {
            
        }
    }
}