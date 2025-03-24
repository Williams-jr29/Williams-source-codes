#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " + number << endl;
    cerr << "This is an example of an error message";
}