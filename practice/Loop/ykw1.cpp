// #include<iostream>
// using namespace std;

// int main()
// {
//     // understanding blocks
//     int x = 5;
//     {
//         // it will execute first 
//         int y = 10;
//         cout << "y = " << y << '\n';
//     }
//     cout << "x = " << x << '\n';

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     // understanding blocks
//     int x = 5;
//     {
//         int y = 10;
//         cout << "y = " << y << '\n';
//         cout << "x = " << x << '\n';
//     }
//     cout << "x = " << x << '\n';

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int line = 1; line <= 5; line++) {
//         for (int star = 1; star <= line; star++) {
//             cout << '*';
//         }
//         cout << '\n';
//     }

//     return 0;
// }

// *
// **
// ***
// ****
// *****



#include<iostream>
using namespace std;

int main()
{
    for (int line = 1; line <= 5; line++) {
        int star_count = line;
        int space_count = 5 - star_count;
        for (int space = 1; space <= space_count; space++) {
            cout << ' ';
        }
        for (int star = 1; star <= star_count; star++) {
            cout << '*';
        }
        cout << '\n';
    }
}






















// #include<iostream>
// using namespace std;

// int main()
// {
    
// }