#include<iostream>
#include<string>

using namespace std;

int main(){
    //Declarations
    int yob,age;
    string interest;
    cout<<".............SIMPLE ADMISSION PROGRAM USING C++............."<<endl;
    cout<<"Enter the child's year of birth: "<<endl;
    cin>>yob;

    //Operations
    age = 2025 - yob;
    
    //Decision Making
    if(age >= 1 && age <=10)
    {
        //pick the interest
        cout << "Enter the child's interest i.e soccer or art: "<<endl;
        cin>>interest;
        //check the interest and assign to group
        if(interest == "soccer")
        {
            cout<<"Assign to Soccer Play Group."<<endl;
        }
        else if(interest == "art")
        {
            cout<<"Assign to Art Play Group."<<endl;
        }
        else 
        {
            cout<<"Assigned to Other Play Group."<<endl;

        }
        //check the different learning levels based on age
        if(age >=7)
        {
            cout<<"Admit to Grade School"<<endl;
        }
        else if (age >=5&& age <=6)
        {
            cout<<"Admit to Kindergaten"<<endl;
        }
        else if (age >=3&& age<=4)
        {
            cout<<"Admit to Pre-School"<<endl;
        }
        else if (age >=1&& age<=2)
        {
            cout<<"Admit to Play Group"<<endl;
        }
        else if (age < 1)
        {
            cout<<"Reject"<<endl;
        }
        
    }
    else
    {
        cout<<"invalid age input. Age must be from 4years to 10years"<<endl;
    }
}