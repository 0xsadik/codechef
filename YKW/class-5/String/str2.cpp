#include<iostream>
using namespace std;

int main()
{
    // char a[100];
    // cin >> a; // this one will not count space 
    // cout << a << '\n';

    // --> to solve this particular problem i can follow this way 
    char a[100];
    cin.get(a, 100); // using get we can skip spaces of character 
    cout << a << '\n';

    return 0;
}
    // NOTE:  cin.get() reads a string with the whitespace 
    // syntax: cin.get(string_name, size);
    