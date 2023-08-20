#include<iostream>
using namespace std;

// add function 

int add (int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << add(a, b) << '\n';

    return 0;
}