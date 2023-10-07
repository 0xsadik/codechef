// 123 -> 666

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int c = num % 10;
    num /= 10;

    int b = num % 10;
    num /= 10;

    int a = num % 10;

    int num1 = (a * 100) + (b * 10) + c; // abc 
    int num2 = (b * 100) + (c * 10) + a; // bca
    int num3 = (c * 100) + (a * 10) + b; // cab

    int sum = num1 + num2 + num3; // abc + bca + cab
    cout << sum << '\n';

    return 0;
}