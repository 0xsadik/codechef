#include <iostream>
using namespace std;

int main() {
    int t, x;
    cin >> t;
    while(t--) {
        cin >> x;
        if (x < 4) {
            cout << "MILD\n";
        }
        else if (x >= 7) {
            cout << "HOT\n";
        }
        else {
            cout << "MEDIUM\n";
        }
    }
	return 0;
}
