// better deal -> 584

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, shop1, shop2;
        cin >> a >> b;
        shop1 = (100 * a) / 100;
        shop2 = (200 * b) / 100;
        if (shop1 < shop2) {
            cout << "FIRST\n";
        }
        else if(shop1 == shop2) {
            cout << "BOTH\n";
        }
        else {
            cout << "SECOND\n";
        }
    }
    return 0;
}