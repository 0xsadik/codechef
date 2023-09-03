/*
    cnt = log10(num);
    firstdig = num / pow(10, cnt);
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // let's find the first digit first 
    int x, numcnt, firstDigit; cin >> x;
    numcnt = log10(x);
    firstDigit = x / pow(10, numcnt);
    if (firstDigit % 2 == 0) {
        cout << "EVEN\n";
    }
    else {
        cout << "ODD\n";
    }
}  