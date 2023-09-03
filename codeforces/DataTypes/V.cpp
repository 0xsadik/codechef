#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char sign;
    cin >> a >> sign >> b;
    if (sign == '>') {
        if (a > b) {
            cout << "Right\n";
        }
        else {
            cout << "Wrong\n";
        }
    }
    else if (sign == '<') {
        if (a < b) {
            cout << "Right\n";
        }
        else {
            cout << "Wrong\n";
        }
    }
    else if (sign == '=') {
        if (a == b) {
            cout << "Right\n";
        }
        else {
            cout << "Wrong\n";
        }
    }

    return 0;
}