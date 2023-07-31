// array problem 

#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 2, 9, 1, 1};

    int count = 0;
    for(int i = 0; i < 6; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}