
// #include<iostream>
// using namespace std;

// int main()
// {
//     char a[100];
//     cin.get(a, 100);
//     int len = 0;
//     for(int i = 0; a[i] != '\0'; i++) {
//         len++;
//     }
//     // got length 
//     // needa reverse it 
//     for(int r = len; r >= 0; r--) {
//         cout << a[r];
//     }
//     cout << '\n';

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     char a[100];
//     cin.get(a, 100);

//     int len = strlen(a);
//     for(int i = len; i >= 0; i--) {
//         cout << a[i] << '\n';
//     }
//     // cout << endl;
    
//     return 0;
// }



// --> builtin way 


#include<iostream>
#include<string.h>

using namespace std;

int main() {
    // palindrom or not 

    char a[100];
    cin >> a;

    int len = 0;
    for(int l = 0; a[l] != '\0'; l++) {
        len++;
    }
    // let's reverse 
    for (int i = len; i >= 0; i++) {
        cout << a[i];
    }
    if (a == a) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}