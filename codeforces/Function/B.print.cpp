#include<iostream>
using namespace std;

void loop(int n) {
    for(int i = 1; i < n; i++) {
        cout << i << " ";
    }
    cout << n;
}

int main() 
{
    int n; cin >> n;
    loop(n);

    return 0;
}