#include<iostream>
using namespace std;

extern int globalVariable; 
int main()
{
    //Trying  to access globalVariable value
    cout << "In Main file, globalVariable ="<<globalVariable <<endl;
    //Change globalVariable to 200
    globalVariable = 200;
    //The changed value of globalVariable 
    cout << "In this Main file, globalVariable ="<<globalVariable <<endl;
}