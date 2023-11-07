// number of operation 

#include<iostream>
using namespace std;

int main()
{
    int operations = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 7; j++) {
            operations++;
        }
    }
    cout << "Damn! happened: " << operations << '\n';

    return 0;
}