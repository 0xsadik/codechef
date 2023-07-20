#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int messi = (2 * a) + b;
    int ronaldo = (2 * x) + y;
    
    
    if (messi > ronaldo) {
        cout << "Messi\n";
    }
    else if (messi == ronaldo){
        cout << "Equal\n";
    }
    else {
        cout << "Ronaldo\n";
    }
    return 0;
}