#include <iostream>
using namespace std;

//double to int conversion
int main()
{
    double myNum=15.5;
    int myNewNum, charCasted;
    myNewNum=myNum;
    cout<< myNewNum;
    
    //character is int conversion
    char myChar='c';
    charCasted = myChar;
    cout<< "char to int: "<<charCasted <<endl;

    //bool to int conversion
    bool myBool=true;
    cout<<"bool to int: "<<myBool<<endl;

    //explicit typecasting
    double myNum2=20.678;
    int myNewNum2=int(myNum2);
    cout<<myNewNum2<<endl;

    //int to char conversion using static cast 
    char myChar2;
    int myInt=45;
    float myfloat=4.567;
    int myNum3;
    myChar2= static_cast<char>(myInt);
    myNum3= static_cast<int>(myfloat);
    cout<<"int to char: "<<myChar2<<endl;
    cout<<"float to int: "<<myNum3<<endl;

    return 0;


}