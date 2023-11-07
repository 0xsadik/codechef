

#include<iostream>
using namespace std;

int main()
{
    int lines;
    cin >> lines;
    int spaces = lines - 1;
    for (int i = 1; i <= lines; i++) {
        for (int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        for (int x = 1; x < i * 2; x ++) {
            cout << "*";
        }
        cout << '\n';
        spaces--;
    }

    // spaces1 = 1;
    
}