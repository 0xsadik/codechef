// #include<iostream>
// using namespace std;

// int main()
// {
//     char a[100];
//     // cin >> a;
//     cin.get(a, 100);
//     int len = 0;
//     for(int i = 0; a[i] != '\0'; i++) {
//         len++;
//     }
//     cout << len << '\n';
// }

// built-in way 

#include<iostream>
using namespace std;

int main()
{
    char a[100];
    cin >> a;
    int len = strlen(a);
    cout << len << '\n';

    return 0;
}