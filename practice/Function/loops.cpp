
// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 10; i++) {
//         // basic loop 
//         cout << i << '\n';
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 10; i >= 0; i--) {
//         cout << i << ' ';
//     }
//     cout << '\n';
// }


/* break and continue stuff 
        -> break = break out of a loop 
        -> continue = skip current itereation
*/


// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 20; i++) {
//         if ( i == 13 ) {
//             break;
//         }
//         cout << i << ' ';
//     }

//     return 0;
// }


#include<iostream>
// using namespace std;

// int main ()
// {
//     for (int i = 0; i <= 20; i++) {
//         if (i == 13 || i == 14 || i == 15 || i == 16) {
//             continue; 
//         }
//         cout << i << '\n';
//     }

//     return 0;
// }


// 22. nested loops 

#include<iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    char symbol;
    cout << "how many rows? :";
    cin >> rows;
    cout << "how many columns? :";
    cin >> columns;
    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << symbol << ' ';
        }
        cout << '\n';
    }
}