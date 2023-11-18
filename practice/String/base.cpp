// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // char name[20];
//     // cin.get(name, 20);

//     char name[20];
//     cin >> name;

//     cout << name << '\n';
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // get length
//     char name[123];
//     cin >> name;
//     int len = 0;
//     for (int i = 0; name[i] != '\0'; i++ ) {
//         len++;
//     }
//     cout << len << '\n';
// }


// using function 

// #include<bits/stdc++.h>
// using namespace std;

// int len(char name[]) {
//     int cnt = 0;
//     for (int i = 0; name[i] != '\0'; i++) {
//         cnt++;
//     }
//     return cnt;
// }

// int main()
// {
//     // string length
//     char name[20];
//     // cin >> name;
//     cin.get(name, 20);
//     cout << "length of name is : " << len(name) << '\n';

//     return 0;
// }


// --> let's reverse a string 

#include<bits/stdc++.h>
using namespace std;

int len(char name[]) {
    int cnt = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        cnt++;
    }
    return cnt;
}



int main()
{
    // string length
    char name[20];
    cin >> name;
    cout << "length of name is : " << len(name) << '\n';
    // reverse 

    // for (int i = len(name); i >= 0; i--) {
    //     cout << name[i];
    // }
    // cout << '\n';

    cout << rev(name, len(name));

    return 0;
}