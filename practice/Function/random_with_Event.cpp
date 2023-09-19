// random number generate with event 

#include<iostream>
using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;
    
    switch(randNum) {
        case 1:
            cout << "You win your crush's kiss\n";
            break;
        case 2:
            cout << "You win your gf's hug\n";
            break;
        case 3:
            cout << "You win a car\n";
            break;
        case 4:
            cout << "You win a guitar\n";
            break;
        case 5:
            cout << "You win 3 wishes\n";
            break;
    }
}