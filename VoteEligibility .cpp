#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter Age Of A User :";
    cin>>age;
    
    if (age >= 18) {
        cout << "\nYou are eligible for voting";
    } else {
        cout << "\nYou are not eligible for voting";
    }
    return 0;
}    
