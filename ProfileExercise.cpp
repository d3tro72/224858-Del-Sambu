#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout <<"---------------------------------------------"<<endl;
    cout <<"profile\n"; 
    string firstName;
    cout << "Enter your first name\n";
    getline(cin, firstName);

    string lastName;
    cout << "Enter your last name\n";
    getline(cin, lastName);

    string fullName;
    cout << "Enter your full name\n";
    getline(cin, fullName);

    string favouriteMeal;
    cout << " Enter your favourite meal\n";
    getline(cin, favouriteMeal);

    string ambitionLife;
    cout << "Enter your ambition in life\n";
    getline(cin, ambitionLife);
    cout <<"---------------------------------------------"<<endl;
    
    return 0;
}