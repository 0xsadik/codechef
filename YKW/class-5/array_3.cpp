

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int a[n] = {1, 2, 2, 9, 1, 1};
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}
