#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Please Enter your age: ";
    cin >> age;

    if(age >= 18&& age <=120){
        cout << "You are qualified to vote. Get registered before 2027.";
    } else if (age <18){
        cout<< "You are underage not qualified to vote.";
    } else {
        cout<< "Invalid age. Maximum age is 120.";
    }

    return 0;
}