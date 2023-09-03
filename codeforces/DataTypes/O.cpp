// calculator 

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char sign;
    cin >> a >> sign >> b;
    if (sign == '+') {
        cout << a + b << '\n';
    }
    else if (sign == '-') {
        cout << a - b << '\n';
    }
    else if (sign == '*') {
        cout << a * b << '\n';
    }
    else {
        cout << a / b << '\n';
    }
}