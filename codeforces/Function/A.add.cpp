#include<iostream>
using namespace std;
void add(int a, int b) {
    cout << a + b << '\n';
}

int main()
{
    int a, b;
    cin >> a >> b;
    add(a, b);

    return 0;
}