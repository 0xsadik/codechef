#include<iostream>
using namespace std;

int main()
{
    int p1, p2, p3, p4, t, count;
    cin >> p1 >> p2 >> p3 >> p4;
    t = 1;
    count = 0;
    while(t--) {
        if (p1 >= 10) {
            count++;
        }
        else if (p2 >= 10) {
            count++;
        }
        else if (p3 >= 10) {
            count++;
        }
        else {
            cout << 0;
        }
        cout << count << endl;
    }

    return 0;
}