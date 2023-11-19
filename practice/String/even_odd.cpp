// even odd function 

#include<iostream>
using namespace std;

bool even(int a) {
    if (a & 1) {
        return 0;
    }
    else {
        return 1;
    }
}

int main()
{
    cout << even() << '\n';
    return 0;
}
