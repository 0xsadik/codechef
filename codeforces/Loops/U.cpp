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
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        int s = i, total= 0;
        while(s > 0) {
            int s2 = s % 10;
            total += s2;
            s /= 10;
        }
        if (s >= a && s <= b) {
            sum += i;
        }
    }
    cout << sum << '\n';
    return 0;
}


// #include <iostream>

// using namespace std;

// int sum_of_digits(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int main() {
//     int N, A, B;
//     cin >> N >> A >> B;

//     int total_sum = 0;

//     for (int i = 1; i <= N; i++) {
//         int digit_sum = sum_of_digits(i);

//         if (digit_sum >= A && digit_sum <= B) {
//             total_sum += i;
//         }
//     }

//     cout << total_sum << endl;

//     return 0;
// }
