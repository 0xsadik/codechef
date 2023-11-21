// some sums 

#include<iostream>
using namespace std;

int main()
{
    int n, a, b, sum = 0, tsum = 0;
    cin >> n >> a >> b;

    int num = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    for (int i = 1; i <= n; i++) {
        
    }
}