#include<iostream>
using namespace std;

int main()
{
    int n = 6;
    int a[n] = {1, 2, 2, 9, 1, 1};
    int cnt[11];
    for(int value = 1; value <= 10; value++) {
        cnt[value] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        int value = a[i];
        cnt[value]++;
    }
    for (int value = 1; value <= 10; value++) {
        cout << value << " occurs " << cnt[value] << " times\n";
    }

    return 0;
}