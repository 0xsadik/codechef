// Finding minimums 

#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int min;
    int flag = 1;
    for (int i = 1; i <= n; i++) {
        int value;
        cin >> value;
        if (flag) {
            min = value;
        }
    }
}