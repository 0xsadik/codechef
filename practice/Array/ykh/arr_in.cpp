// array with input 

#include<iostream>
using namespace std;

int main()
{
    int result[100];
    int number_of_students = 5;
    for (int i = 0; i < number_of_students; i++) {
        cin >> result[i];
    }

    for (int i = 0; i < number_of_students; i++ ) {
        cout << result[i] << ' ';
    }
    cout << '\n';

    return 0;
}