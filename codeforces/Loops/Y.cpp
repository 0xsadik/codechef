// Easy Fibonacci

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int fib[N];

    // First two numbers in the Fibonacci sequence
    fib[0] = 0;
    fib[1] = 1;

    // Generate the Fibonacci sequence
    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the first N numbers of the Fibonacci sequence
    for (int i = 0; i < N; i++) {
        cout << fib[i] << " ";
    }

    cout << endl;

    return 0;
}
