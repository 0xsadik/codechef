#include<iostream>
using namespace std;

int main()
{
    int r1, r2, d1, d2, add1, add2;
    cin >> r1 >> r2;
    cin >> d1 >> d2;
    add1 = r1 + d1;
    add2 = r2 + d2;

    if (add1 > add2) {
        cout << "Dominater\n";
    }
    else {
        cout << "Everule\n";
    }
    return 0;
}