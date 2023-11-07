// sum of array 


#include<iostream>
using namespace std;

int main()
{
    int age[100];
    int n = 5;
    for (int i = 0; i < n; i++ ){
        cin >> age[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += age[i];
    } 
    cout << "sum of arr: " << sum << '\n';
}