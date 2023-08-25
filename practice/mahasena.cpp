#include <iostream>
using namespace std;

int main() {
	int n, flag1 = 0, flag2 = 0;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) {
	    cin >> a[i];
        if (a[i] % 2 == 0) {
            flag1++;
        }
        else {
            flag2++;
        }
	}
	
	if (flag1 > flag2) {
        cout << "READY FOR BATTLE\n";
    }
    else {
        cout << "NOT READY\n";
    }
	
	return 0;
}
