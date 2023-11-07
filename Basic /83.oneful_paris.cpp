// oneful paris 

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int a, b;
// 	cin >> a >> b;
	
// 	int f1 = a + b + (a * b);
// 	int f2 = b + a + (b * a);
	
// 	if (f1 == 111 || f2 == 111) {
// 	    cout << "Yes\n";
// 	}
// 	else {
// 	    cout << "No\n";
// 	}
	
// 	return 0;
// }


// a bit short 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, f1, f2;
	cin >> a >> b;
	f1 = a + b + (a * b);
    f2 = b + a + (b * a);
	
	(f1 == 111 || f2 == 111) ? cout << "Yes\n" : cout << "No\n";

	
	return 0;
}
