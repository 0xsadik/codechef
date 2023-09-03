#include<iostream>
using namespace std;

int main()
{
    int total,
        gradeCounter,
        grade,
        average;

    // initialization phase

    total = 0;
    gradeCounter = 1;

    // processing phase
    while(gradeCounter <= 10) {
        cout << "Enter grade: ";
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    // termination phase 
    average = total / 10;
    cout << "Class average is : " << average  << '\n';

    return 0;
}