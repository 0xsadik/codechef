#include<iostream>
using namespace std;

int main()
{
    double num;
    int numint = num;
    double res = num - numint;
    if (res != 0) {
        cout << "float " << numint << " " << res << '\n';
    }
    else {
        cout << "Int " << numint << '\n';
    }


    return 0;
}