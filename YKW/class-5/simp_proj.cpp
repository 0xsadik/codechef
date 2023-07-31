// tori's shop 

#include<iostream>
using namespace std;

int main()
{
    cout << "welcome to TORI'S shop\n.......................................\n";
    int products[100];
    int product; 
    cout << "Enter your product: "; cin >> product;
    cout << "..............................................\n";

    for (int i = 0; i < product; i++) {
        cout  << "Enter your " << i+1 << " product price: ";
        cin >> products[i];
    }
    int sum = 0;
    for(int i = 0; i < product; i++) {
        sum += products[i];
    }
    cout << "..........................................\n";
    cout << "Your total bill: " << sum << '\n';

}