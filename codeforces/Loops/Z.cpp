// Three numbers 

#include<iostream>
using namespace std;

int main()
{
    int k, s, cnt = 0;
    cin >> k >> s;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            for (int z = 0; z <= k; z++) {
                if (s - x - y >= 0 && s - x - y) {
                    cnt += 1;
                }
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}