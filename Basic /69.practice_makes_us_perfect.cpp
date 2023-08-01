


#include<iostream>
using namespace std;

int main()
{
    int a[4];
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    // check 
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] >= 10) {
            cnt++;
        }
    }
    if (cnt > 0) {
        cout << cnt << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}