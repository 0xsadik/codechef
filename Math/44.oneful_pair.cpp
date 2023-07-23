#include<iostream>
using namespace std;

int main() {
	int a, b, res;
	cin >> a >> b;
	res = (a + b) + (a * b);
	if (res == 111) {
	    cout << "Yes\n";
	}
	else {
	    cout << "No\n";
	}
	return 0;
}