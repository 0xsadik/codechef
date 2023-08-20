// Fixed Password

#include<iostream>
using namespace std;

int main()
{
    int pass = 1999;
    int newpass;
    while(cin >> newpass) {
        if (newpass == pass) {
            cout << "Correct\n";
            break;
        }
        else {
            cout << "Wrong\n";
        }
    }

    return 0;
}