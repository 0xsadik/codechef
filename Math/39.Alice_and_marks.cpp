#include <iostream>
using namespace std;

int main() {
	int x, y, twice;
	cin >> x >> y;
	twice = y * 2;
	if (x >= twice) {
	    cout << "Yes\n";
	}
	else {
	    cout << "No\n";
	}
	return 0;
}
