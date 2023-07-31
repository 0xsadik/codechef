
// basics first 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int age[5] = {18, 19, 17, 22, 11};
//     cout << age[0] << '\n'; // will access first element of this array 
//     // what if i want last element ? 
//     cout << age[4] << '\n';
 
//     return 0; 
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int age[5] = {18, 19, 17, 22, 11};
//     for(int i = 0; i < 5; i++) {
//         cout << age[i] << endl;
//     }
// }


// take multiple user input 

// #include<iostream>
// using namespace std;

// int main()
// {
//     int result[100];
//     int number_of_students = 5;
//     for(int i = 0; i < number_of_students; i++) {
//         cin >> result[i];
//     }
//     // to get output 
//     for (int i = 0; i < number_of_students; i++) {
//         cout << result[i] << ' ';
//     }
//     cout << endl;

//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int result[100];
//     int number_of_students = 5;
//     for(int i = 0; i < number_of_students; i++) {
//         cin >> result[i];
//     }
//     // to get output 
//     // for (int i = 0; i < number_of_students; i++) {
//     //     cout << result[i] << ' ';
//     // }
//     // -> to get sum 
//     int sum = 0;
//     for (int i = 0; i < number_of_students; i++) {
//         sum += result[i];
//     }
//     cout << sum;
//     cout << endl;

//     return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}