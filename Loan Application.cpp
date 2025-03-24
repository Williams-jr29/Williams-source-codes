include<iostream>
include<string>

using namespace std;

int main(){
    //Declarations
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;
    cout<<"..........SIMPLE APPLICATION TO CHECK IF QUALIFIED FOR LOAN USING C++.........."<<endl;
    
    //Capture customer input
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your bank balance: ";
    cin>>bankBalance;
    cout<<"Enter your CRB status: ";
    cin>>crbStatus;
    cout<<"Enter the number of months you have been a customer: ";
    cin>>monthsAsCustomer;

    //Check if customer qualifies for loan
    if(age>=22 && bankBalance>=50000 && crbStatus=="good" && monthsAsCustomer>=6){
        cout<<"Congratulations! You qualify for a loan."<<endl;
    }else{
        cout<<"Sorry, you do not qualify for a loan."<<endl;
    }
    return 0;
}