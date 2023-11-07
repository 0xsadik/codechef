// deeper 

#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 2; i++) {
        cout << "i = " << i << '\n';
        for (int j = 1; j <= 2; j++) {
            cout << "\tj = " << j << '\n';
            for (int k = 1; k <= 2; k++) {
                cout << "\t\tk = " << k << '\n';
            }
        }
    }
    cout << '\n';

    return 0;
}