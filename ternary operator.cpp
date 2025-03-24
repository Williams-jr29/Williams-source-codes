#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Please Enter your age: ";
    cin >> age;
    
    string output=(age>=18&&age<=120)?"You are qualified to vote. Get registered before 2027.":"You are underage not qualified to vote.";
    cout << output ;

    return 0;
}