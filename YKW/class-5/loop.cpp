// nested loops and stuff 

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int week = 1; week <= 4; week++) {
//         cout << "week -> " << week  << " : " << endl;
//         for (int day = 1; day <= 7; day++) {
//             cout << "       Day " << day << endl;
//         }
//     }
// }


// while loop inside for loop 

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int week = 1; week <= 4; week++) {
//         cout << "week " << week << " -> " << '\n';

//         int day = 1;
//         while(day <= 7) {
//             cout << "       Day " << day << ";" << '\n';
//             day++;
//         }
//     }
// }


 // pattern - 1 ( problem ) 

//  #include<iostream>
//  using namespace std;

//  int main()
//  {
//     for(int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 5; j++) {
//             cout << '*';
//         }
//         cout << '\n'; 
//     }
//     cout << endl;
//  }


// pattern - 2 (problem)

// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int line = 1; line <= 6; line++) {
//         for (int star = 1; star <= line; star++) {
//             cout << '*';
//         }
//         cout << '\n';
//     }
// }


//  #include<iostream>
//  using namespace std;

// int main()
// {
//     for(int line = 1; line <= 5; line++) {
//         int star_count = line;
//         int space_count = 5 - star_count;
//         for(int i = 1; i <= space_count; i++) {
//             cout << ' ';
//         }
//         for (int i = 1; i <= star_count; i++) {
//             cout << '*';
//         }
//         cout << '\n'; 
//     }
// }


// checking something 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int operations = 0;
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 6; j++) {
//             if (j == 3 || j == 5) continue;
//             operations++;
//         }
//     }
//     cout << operations << '\n';

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int operations = 0;
//     for(int i = 1; i <= 5; i++) {
//         if (i == 4) continue;
//         for (int j = 1; j <= 6; j++) {
//             if (j == 4) break;
//             operations++;
//         }
//     }
//     cout << operations << '\n';

//     return 0;
// }



// Deeeper 

#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 2; i++) {
        cout << "i = " << i << '\n';
        for (int j = 1; j <= 2; j++) {
            cout << "   j = " << j << '\n';
            for (int k = 1; k <= 2; k++) {
                cout << "       k = " << k << '\n';
                for (int l = 1; l <= 3; l++) {
                    cout << "           l = " << l << '\n'; 
                }
            }
        }
    }
}