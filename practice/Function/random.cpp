// genrate random numbers 

#include<iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    // int num = rand() % 6;
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    cout << num1 << num2 << num3 << '\n';

    return 0;
}